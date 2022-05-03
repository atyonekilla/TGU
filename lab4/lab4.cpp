#include <iostream>

using namespace std;
void one() {
    int x;
    printf("Вопрос такой ? \n");
    printf("A = (1) \nB = (2) \nC = (3) \nОтвет: \n");
    cin >> x;
    if (x == 1) {
        cout << "Правильно" << endl;
    }
    else
    {
        cout << "Неправильнo\n" << endl;
        cout << "Правильный ответ: " << x << endl;
    }
}
void two() {
    int x = 0, y = 0;
    int r = 0;
    printf("r = ");
    cin >> r;
    printf("B(x) = ");
    cin >> x;
    printf("B(y) = ");
    cin >> y;
    r = pow(r, 2);
    x = pow(x, 2) + pow(y, 2);
    if (x < r)
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}
void three() {
    int x, x1;
    printf("Введите x: \n");
    cin >> x;
    if (x < -2)
    {
        printf("1 Условие \n");
        x1 = 0;
    }
    if ((x <= -2) && (x < 1))
    {
        printf("2 Условие \n");
        x1 = 1;
    }
    if ((x >= -1) && (x <0))
    {
        printf("3 Условие \n");
        x1 = 0;
    }
    if (x >= 0)
    {
        printf("4 Условие \n");
        x1 = 1;
    }
    cout << "Y(x) = " << x1 << endl;
}
void four() {
    int x;
    printf("Введите x: \n");
    cin >> x;
    if ((x == -4) || (x == -2) || (x == 2) || (x == 4))
    {
        printf("Ответ: 0 \n");
    }
    if ((x == -3) || (x == 3)) {
        printf("Ответ: -1 \n");
    }
    if ((x == -1) || (x == 1)) {
        printf("Ответ: 1 \n");
    }
    if  (-4 > x > 4)
    {
        printf("Функция не определена \n");
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int switch_on;
    printf("1.Задание \t 2.Задание \t 3.Задание \t 4.Задание \n");
begin:
    printf("Введите задание: \n");
    printf("> ");
    cin >> switch_on;
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
    return 0;
}