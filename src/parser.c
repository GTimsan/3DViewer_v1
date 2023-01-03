#include "parser.h"

int parser(data_t* data, char* file_name) {
    FILE* f;
    f = fopen(file_name, "r");

    if (f != NULL) {
        unsigned int v_count = 0, p_count = 0, e_count = 0;
        char str[100];
        char c;
        int numb = 0;
        while (fgets(str, 100, f)) {
            if (str[0] == 'v' && str[1] == ' ') {
                v_count++;
            }
            if (str[0] == 'f' && str[1] == ' ') {
                e_count += count_calc(str);
                p_count++;
            }
        }
        fclose(f);
        data->v_count = v_count;
        data->p_count = p_count;
        data->e_count = e_count;

        data->vertexes = (double*)calloc(data->v_count * 3, sizeof(double));

        data->edges = (int*)calloc(data->e_count * 2, sizeof(int));

        int e_numb = 0;
        //        C:\\Users\\Timsan\\QT\\3dShlyap\\objects\\cube.obj
        f = fopen(file_name, "r");
        while (fgets(str, 100, f)) {
            if (str[0] == 'v' && str[1] == ' ') {
                sscanf(str, "%c %lf %lf %lf", &c, &data->vertexes[numb], &data->vertexes[numb + 1],
                       &data->vertexes[numb + 2]);

                numb += 3;
            }
            if (str[0] == 'f' && str[1] == ' ') {
                int value = 0, e_count_in_str = 0;
                e_count_in_str = count_calc(str);
                int e_tmp = 0;
                int tmp_val = 0;
                for (unsigned int i = 2; i < strlen(str); i++) {
                    if (str[i] == '/') {
                        while (str[i] != ' ') {
                            i++;
                        }
                    }
                    if (isdigit(str[i])) {
                        value = find_value(str, &i) - 1;
                        data->edges[e_numb] = value;
                        if (e_tmp == 0) {
                            tmp_val = value;
                            e_tmp++;
                        } else if (e_numb > 0 && e_count_in_str != 0) {
                            e_numb++;
                            data->edges[e_numb] = value;
                        }

                        e_count_in_str--;
                        e_numb++;
                        if (e_count_in_str == 0) {
                            data->edges[e_numb] = tmp_val;
                            e_numb++;
                        }
                    }
                }
            }
        }
        fclose(f);
    }

    return 0;
}

int find_value(char* str, unsigned int* pos_i) {
    char arr[8] = {0};
    int j = 0;
    for (int i = *pos_i;;) {
        if ((str[i] >= 48) && (str[i] <= 57)) {
            arr[j] = str[i];
            j++, i++;
        } else {
            break;
        }
    }
    int tmp = atoi(arr);
    *pos_i += j - 1;
    return tmp;
}

int count_calc(char* str) {
    int in_digit = 0, count = 0;
    for (unsigned int i = 2; i < strlen(str); i++) {
        if (str[i] == '/') {
            while (str[i] != ' ') {
                i++;
            }
        }
        if (isdigit(str[i])) {
            if (!in_digit) {
                count++;
                in_digit = 1;
            }
        } else {
            in_digit = 0;
        }
    }
    return count;
}

void moving(data_t* A, double move, int flag) {
    for (int i = 0; i < A->v_count; i++) {
        A->vertexes[i * 3 + flag] += move;
    }
}

void rotation(data_t* A, double angle, int flag) {
    // flag 0 = x, 1 = y, 2 = z
    for (int i = 0; i < A->v_count; i++) {
        double x = A->vertexes[i * 3];
        double y = A->vertexes[i * 3 + 1];
        double z = A->vertexes[i * 3 + 2];
        if (flag == 0) {
            A->vertexes[i * 3 + 1] = cos(angle) * y - sin(angle) * z;
            A->vertexes[i * 3 + 2] = sin(angle) * y + cos(angle) * z;
        } else if (flag == 1) {
            A->vertexes[i * 3] = cos(angle) * x + sin(angle) * z;
            A->vertexes[i * 3 + 2] = (-sin(angle)) * x + cos(angle) * z;
        } else if (flag == 2) {
            A->vertexes[i * 3] = cos(angle) * x - sin(angle) * y;
            A->vertexes[i * 3 + 1] = sin(angle) * x + cos(angle) * y;
        }
    }
}

void scaling(data_t* A, double scale) {
    for (int i = 0; i < A->v_count * 3; i++) {
        A->vertexes[i] *= scale;
    }
}
