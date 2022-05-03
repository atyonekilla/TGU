#define _USE_MATH_DEFINES
#define M_PI_3     1.0471975511966666666666666666667  // pi/3

#include <iostream>

using namespace std;

void one() {
    double t = 2;
    double m = 0.2;
    double a;
    printf("Введите A: ");
    cin >> a;

    t = (2 * pow(M_PI, 2) * pow(a, 2) * m) / pow(t, 2);

    cout << "Ответ: " << t << endl;
    
}

void two() {
    double H = 5, R = 5;
    double v,s;
    s = M_PI * pow(R, 2) * H;
    v = (M_PI * 1/3) * pow(R, 2) * H;
    cout << "Объем цилиндра: " << s << endl << "Объем конуса: " << v << endl;
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