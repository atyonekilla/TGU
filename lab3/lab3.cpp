#include <iostream>
#include <cmath>

using namespace std;

void one() {
    double c = pow(10, -6);
    printf("Введите C: \n > ");
    cin >> c;
    c = pow(c, -6);
    double l;
    printf("Введите L: \n > ");
    cin >> l;
    double u;
    printf("Введите U: \n > ");
    cin >> u;

    double i = u * sqrt(c / l);
    double w = l * pow(i, 2) / 2;

    cout << w << endl;
}

void two() {
    double x1, y1, x2, y2, x3, y3, a, b, c, P;

    cout << "Введите x1 y1 \n";
    cin >> x1 >> y1;
    cout << "Введите x2 y2 \n";
    cin >> x2 >> y2;
    cout << "Введите x3 y3 \n";
    cin >> x3 >> y3;

    a = hypot((x1 - x2), (y1 - y2));
    b = hypot((x1 - x3), (y1 - y3));
    c = hypot((x2 - x3), (y2 - y3));

    P = a + b + c;

    cout << "Периметр треугольника равен = " << P << "\n";
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int switch_on;
    printf("1.Задание \t 2.Задание \n");
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
    default:
        printf("Вы не выбрали ни один из доступный заданий.\n");
        printf("\n");
        goto begin;
        break;
    }
    return 0;
}