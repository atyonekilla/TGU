#include <iostream>
#include <cmath>

using namespace std;
/*6 Задание*/
void one() {
    int m;
    const double x = 1.1;
    double a, b;

    double y;
    printf("Введите переменную m: ");
    cin >> m;

    a = sqrt(abs(x));
    b = pow(x, 4) + pow(m, 2);

    y = pow(sin(a + pow(tan(b), 3)), 2);
    cout << endl <<"Ответ: " << y << endl;
}
/*19 Задание*/
void two() {
    double x;
    printf("Введите переменную x: ");
    cin >> x;
    double a = 3.7;
    double p, t;

    p = round(pow(x, 2) - sqrt(abs(x)));
    t = pow(x, 2) + pow(a, 2);
    t = round(((p*p) * x) + pow(t, 5));
    cout << fixed << "Ответ: "  << t << endl;
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