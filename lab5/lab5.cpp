#include "func.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int switch_on;
    printf("1.Задание \t 2.Задание \t 3.Задание \t 4.Задание \n");
begin:
    printf("Введите задание: \n");
    printf("> ");

    cin >> switch_on;
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Не число\n";
    }
    else {
        switch (switch_on)
        {
        case 1:
            one();
            goto begin;
            break;
        case 2:
            two();
            goto begin;
            break;
        case 3:
            three();
            goto begin;
            break;
        case 4:
            four();
            goto begin;
            break;
        default:
            printf("Вы не выбрали ни один из доступный заданий.\n");
            printf("\n");
            goto begin;
            break;
        }
    }
    return 0;
}