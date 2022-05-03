#pragma once
#define _USE_MATH_DEFINES
/* Митрофанов Александр М-11 | Задание 1 (#6,#19) Задание 2(#6, #19) */
#include <iostream>
#include <cmath>

using namespace std;
const int ARR_SIZE = 3;

void show_array_int(int arr[], const size_t& arr_size)
{
    int* arr_end = arr + arr_size;
    cout << "{ ";
    while (arr != arr_end)
        cout << *arr++ << " ";
    cout << "}\n";
}

void show_array_float(float arr[], const size_t& arr_size)
{
    float* arr_end = arr + arr_size;
    cout << "{ ";
    while (arr != arr_end)
        cout << *arr++ << " ";
    cout << "}\n";
}

void one() {
    int input;

    float a[ARR_SIZE] = { -3,3.5,0.1 };
    float b[ARR_SIZE] = { 58,27,-87 };
    float c[ARR_SIZE] = { -8,-35,42 };

    printf("Выберите вариант: \n\n");
    printf("Первый вар. \n");
    show_array_float(a, ARR_SIZE);

    printf("Второй вар. \n");
    show_array_float(b, ARR_SIZE);

    printf("Третий вар. \n");
    show_array_float(c, ARR_SIZE);

    printf("> ");
    cin >> input;
    switch (input)
    {
    case 1:
        if ((a[0] + a[1] + a[2]) > 0) {
            a[0] = a[0] * 2;
            a[1] = a[1] * 2;
            a[2] = a[2] * 2;

            cout << "Числа увеличились в два раза: \n" << "A = " << a[0] << "\n" << "B = " << a[1] << "\n" << "C = " << a[2] << endl;
        }
        else {
            a[0] = 0;
            a[1] = 0;
            a[2] = 0;
            cout << "A , B , C = 0\n";
        }
        break;
    case 2:
        if ((b[0] + b[1] + b[2]) > 0) {
            b[0] = b[0] * 2;
            b[1] = b[1] * 2;
            b[2] = b[2] * 2;

            cout << "Числа увеличились в два раза: \n" << "A = " << b[0] << "\n" << "B = " << b[1] << "\n" << "C = " << b[2] << endl;
        }
        else {
            b[0] = 0;
            b[1] = 0;
            b[2] = 0;
            cout << "A , B , C = 0 \n";
        }
        break;
    case 3:
        if ((c[0] + c[1] + c[2]) > 0) {
            c[0] = c[0] * 2;
            c[1] = c[1] * 2;
            c[2] = c[2] * 2;

            cout << "Числа увеличились в два раза: \n" << "A = " << c[0] << "\n" << "B = " << c[1] << "\n" << "C = " << c[2] << endl;
        }
        else {
            c[0] = 0;
            c[1] = 0;
            c[2] = 0;
            cout << "A , B , C = 0\n";
        }
        break;
    default:
        break;
    }
}
void two() {

    //1-ф 2-лямб
    const int arrSize{ 2 };
    //Массив
    int a[arrSize] = { 30, 121 };
    int b[arrSize] = { -15, 50 };
    int c[arrSize] = { 87, 223 };
    printf("Выбор: \n");

    //Вывод условия
    printf("Первый вар. \n");
    show_array_int(a, arrSize);
    printf("Второй вар. \n");
    show_array_int(b, arrSize);
    printf("Третий вар. \n");
    show_array_int(c, arrSize);

    int input;
    int vibor[arrSize] = {};

    //Замена в один массив
    printf("> ");
    cin >> input;
    if (input == 1) {
        int* ptr_arr1 = a;
        int* ptr_arr2 = vibor;
        int* arr_end = ptr_arr1 + arrSize;
        for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
            *ptr_arr2 = *ptr_arr1;
    }
    if (input == 2) {
        int* ptr1{ b };
        int* ptr2{ vibor };

        int* end{ b + arrSize };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    if (input == 3) {
        int* ptr1{ c };
        int* ptr2{ vibor };

        int* end{ c + arrSize };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    // Северное: 0 < f < 90
    // Южное: -90 < f < 0
    // Западное: 0 < l < 180
    // Восточное: -180 < l < 0

    if ((0 < vibor[0]) && (vibor[0] < 90) && (0 < vibor[1]) && (vibor[1] < 180)) {
        printf("Северно - Западное \n");
    }
    if ((0 < vibor[0]) && (vibor[0] < 90) && (-180 < vibor[1]) && (vibor[1] < 0)) {
        printf("Северно - Восточное \n");
    }
    if ((-90 < vibor[0]) && (vibor[0] < 0) && (0 < vibor[1]) && (vibor[1] < 180)) {
        printf("Южно - Западное \n");
    }
    if ((-90 < vibor[0]) && (vibor[0] < 0) && (-180 < vibor[1]) && (vibor[1] < 0)) {
        printf("Южно - Восточное \n");
    }
    //printf("3 Значение не подходит по условию т.к выше 180`(градусов)\n");//PS Полушарие делится на 180 градусов
}
void three() {
    float xx = 0, x, y = 0;

    printf("Введите X: \n");
    printf("> ");
    cin >> x;
    float aa = pow(M_E, 0.2 * x);
    float bb = pow(M_E, 0.15 * x);
    float cc = pow(M_E, 0.9 * x);

    float a[ARR_SIZE] = { 0.2,0.5,aa };
    float b[ARR_SIZE] = { 0.15,0.2,bb };
    float c[ARR_SIZE] = { 0.9,5,cc };

    float vibor[ARR_SIZE] = {};

    //Вывод изначальный массивов
    printf("Первый вар. \n");
    show_array_float(a, ARR_SIZE);
    printf("Второй вар. \n");
    show_array_float(b, ARR_SIZE);
    printf("Третий вар. \n");
    show_array_float(c, ARR_SIZE);

    printf("\n");
    printf("Введите вариант: \n");
    printf("> ");

    //Выбор массива
    int input;
    cin >> input;
    if (input == 1) {
        float* ptr_arr1 = a;
        float* ptr_arr2 = vibor;
        float* arr_end = ptr_arr1 + ARR_SIZE;
        for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
            *ptr_arr2 = *ptr_arr1;
    }
    if (input == 2) {
        float* ptr1{ b };
        float* ptr2{ vibor };

        float* end{ b + ARR_SIZE };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    if (input == 3) {
        float* ptr1{ c };
        float* ptr2{ vibor };

        float* end{ c + ARR_SIZE };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    if (0 < x < 3) {
        if (x < -log(vibor[0])) {
            y = vibor[0] * pow(sin(x), 2) + vibor[1] * cos(vibor[2] * x);
        }
        if (-log(vibor[0] <= x) && (x <= vibor[1])) {
            y = pow(vibor[0], vibor[1]) - pow(cos(vibor[0] + (vibor[1] * vibor[2])), 3);
        }
        if (x > vibor[1]) {
            y = sqrt(2.5 * pow(vibor[0], 3) + pow((vibor[1] - (vibor[2] * pow(x, 2))), 6));
        }
        if (y == 0)
            printf("Не сработало ни одно условие \n");
        cout << "Y = " << (y) << endl;
    }
    else
        printf("Ошибка ! \n");
}

void four() {
    float xx = 0, x, y = 0;

    printf("Введите X: \n");
    printf("> ");
    cin >> x;

    /*1 Массив*/
    float a1 = 2.2, a2 = 2.4;
    float a3 = log(abs(a1));
    float a[ARR_SIZE] = { a1,a2,a3 };

    /*2 Массив*/
    float b1 = 1.6, b2 = 1.7;
    float b3 = log(abs(b1));
    float b[ARR_SIZE] = { b1,b2,b3 };

    /*3 Массив*/
    float c1 = 1.3, c2 = 4.2;
    float c3 = log(abs(pow(c2, 2) * x));
    float c[ARR_SIZE] = { c1,c2,c3 };

    float vibor[ARR_SIZE] = {};

    //Вывод изначальный массивов
    printf("Первый вар. \n");
    show_array_float(a, ARR_SIZE);
    printf("Второй вар. \n");
    show_array_float(b, ARR_SIZE);
    printf("Третий вар. \n");
    show_array_float(c, ARR_SIZE);

    printf("\n");
    printf("Введите вариант: \n");
    printf("> ");

    //Выбор массива
    int input;
    cin >> input;
    if (input == 1) {
        float* ptr_arr1 = a;
        float* ptr_arr2 = vibor;
        float* arr_end = ptr_arr1 + ARR_SIZE;
        for (; ptr_arr1 != arr_end; ++ptr_arr1, ++ptr_arr2)
            *ptr_arr2 = *ptr_arr1;
    }
    if (input == 2) {
        float* ptr1{ b };
        float* ptr2{ vibor };

        float* end{ b + ARR_SIZE };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    if (input == 3) {
        float* ptr1{ c };
        float* ptr2{ vibor };

        float* end{ c + ARR_SIZE };
        for (; ptr1 != end; ptr1++, ptr2++)
        {
            *ptr2 = *ptr1;
        }
    }
    if (0 < x < 3) {
        if (x < vibor[0]) {
            y = vibor[2] * sin(pow(vibor[1], 2) * x) + vibor[1] * log(vibor[2] * x + vibor[0]);
        }
        if ((vibor[0] <= x) && (x < vibor[1])) {
            y = vibor[0] + log(vibor[1] * x) - pow(sin(vibor[0] + (vibor[2] * x)), 2);
        }
        if (x >= vibor[2]) {
            y = sqrt(abs(cos(vibor[0] + (vibor[1] * x) + (vibor[2] * pow(x, 2)))));
        }
        if (y == 0)
            printf("Не сработало ни одно из условий \n");
        cout << "Y = " << (y) << endl;
    }
    else
        printf("Ошибка ! \n");
}