#ifndef PARSER_H_
#define PARSER_H_

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief
 * @param v_count Количество вершин в объекте
 * @param p_count Количество полигонов в объекте
 * @param e_count Количество рёбер в объекте
 * @param edges Массив рёбер
 * @param vertexes Массив вершин
 *
 */
typedef struct Data {
    int v_count;  // vertexes - количество вершин
    int p_count;  // polygons - количество полигонов || Возможно не пригодится
    int e_count;       // edges - количество ребер
    int* edges;        // массив ребер
    double* vertexes;  // массив вершин
} data_t;

/**
 * @brief Парсер файла
 *
 * @param data Структура для хранения данных
 * @param file_name Путь к файлу для парсинга
 * @return int
 */
int parser(data_t* data, char* file_name);

/**
 * @brief Находит и конвертирует число из строки в int
 *
 * @param str Входящая строка
 * @param pos_i Позиция индекса в строке откуда начинаем поиск числа
 * @return int возвращаемое значение
 */
int find_value(char* str, unsigned int* pos_i);

/**
 * @brief Считает количество ребёр в строке.(например полигон "f 11 4 6") содержит 3 ребра
 *
 * @param str Входящая строка
 * @return int количество рёбер
 */
int count_calc(char* str);

/**
 * @brief Двигает все вершины по выбранной оси
 *
 * @param A Структура с данными
 * @param move Размер сдвига
 * @param flag ВЫбираем ось. flag 0 = x, 1 = y, 2 = z
 */
void moving(data_t* A, double move, int flag);

/**
 * @brief Поворачивает фигуру
 *
 * @param A Структура с данными
 * @param angle Угол поворота
 * @param flag  Выбираем ось. flag 0 = x, 1 = y, 2 = z
 */
void rotation(data_t* A, double angle, int flag);

/**
 * @brief Масштабируем объект
 *
 * @param A Структура с данными
 * @param scale коэффициент\множитель размера. Пример 0.1 = 10% или 1 * 1.1
 */
void scaling(data_t* A, double scale);

#endif  // PARSER_H_
