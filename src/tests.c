#include <check.h>

#include "parser.h"

START_TEST(test_parser) {
    char file_name[] = "objects/cube.obj";
    data_t data = {0};
    double test_e[] = {0, 6, 6, 4, 4, 0, 0, 2, 2, 6, 6, 0, 0, 3, 3, 2, 2, 0, 0, 1,
                       1, 3, 3, 0, 2, 7, 7, 6, 6, 2, 2, 3, 3, 7, 7, 2, 4, 6, 6, 7,
                       7, 4, 4, 7, 7, 5, 5, 4, 0, 4, 4, 5, 5, 0, 0, 5, 5, 1, 1, 0};
    double test_v[] = {-0.5, -0.5, -0.5, -0.5, -0.5, 0.5, -0.5, 0.5, -0.5, -0.5, 0.5, 0.5,
                       0.5,  -0.5, -0.5, 0.5,  -0.5, 0.5, 0.5,  0.5, -0.5, 0.5,  0.5, 0.5};
    int res = parser(&data, file_name);
    ck_assert_int_eq(data.v_count, 8);
    ck_assert_int_eq(data.e_count, 30);
    ck_assert_int_eq(data.p_count, 10);

    for (int i = 0; i < data.e_count * 2; i++) {
        ck_assert_int_eq(test_e[i], data.edges[i]);
    }

    for (int i = 0; i < data.v_count * 3; i++) {
        ck_assert_double_eq(test_v[i], data.vertexes[i]);
    }

    free(data.vertexes);
    free(data.edges);
}
END_TEST

START_TEST(test_moving) {
    char file_name[] = "objects/cube.obj";
    data_t data = {0};
    double test_v[] = {9.5,  -0.5, -0.5, 9.5,  -0.5, 0.5, 9.5,  0.5, -0.5, 9.5,  0.5, 0.5,
                       10.5, -0.5, -0.5, 10.5, -0.5, 0.5, 10.5, 0.5, -0.5, 10.5, 0.5, 0.5};
    int res = parser(&data, file_name);
    moving(&data, 10, 0);
    for (int i = 0; i < data.v_count * 3; i++) {
        ck_assert_double_eq(test_v[i], data.vertexes[i]);
    }

    free(data.vertexes);
    free(data.edges);
}
END_TEST

START_TEST(test_rotation) {
    char file_name[] = "objects/cube.obj";
    data_t data = {0};
    double test_v[] = {-0.5, 0.5, -0.5, -0.5, -0.5, -0.5, -0.5, 0.5, 0.5, -0.5, -0.5, 0.5,
                       0.5,  0.5, -0.5, 0.5,  -0.5, -0.5, 0.5,  0.5, 0.5, 0.5,  -0.5, 0.5};
    int res = parser(&data, file_name);
    rotation(&data, M_PI / 2, 0);
    for (int i = 0; i < data.v_count * 3; i++) {
        ck_assert_double_eq_tol(test_v[i], data.vertexes[i], 0.000001);
    }

    free(data.vertexes);
    free(data.edges);
}
END_TEST

START_TEST(test_scaling) {
    char file_name[] = "objects/cube.obj";
    data_t data = {0};
    double test_v[] = {-1.5, -1.5, -1.5, -1.5, -1.5, 1.5, -1.5, 1.5, -1.5, -1.5, 1.5, 1.5,
                       1.5,  -1.5, -1.5, 1.5,  -1.5, 1.5, 1.5,  1.5, -1.5, 1.5,  1.5, 1.5};
    int res = parser(&data, file_name);
    scaling(&data, 3);
    for (int i = 0; i < data.v_count * 3; i++) {
        ck_assert_double_eq(test_v[i], data.vertexes[i]);
    }

    free(data.vertexes);
    free(data.edges);
}
END_TEST

int main() {
    Suite* s = suite_create("tests");
    TCase* tc_core = tcase_create("Core");
    SRunner* sr = srunner_create(s);
    int number_failed;

    suite_add_tcase(s, tc_core);

    tcase_add_test(tc_core, test_parser);
    tcase_add_test(tc_core, test_moving);
    tcase_add_test(tc_core, test_rotation);
    tcase_add_test(tc_core, test_scaling);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_VERBOSE);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
