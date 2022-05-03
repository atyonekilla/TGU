#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

int factor(double num) {
    long double factorial = 1.0;
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    setlocale(LC_ALL, "ru");

    // One (Задание: разработать программу согласно заданию.)
    int num;
    std::cout << "Введите число:";
    std::cin >> num;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            std::cout <<"Делитель: " << i << "\n";
        }
    }

    // Two (Задание: разработать программу согласно заданию.)
    int Number, sum(0);
    while (std::cin >> Number && Number != 0)
    {
        if (Number > 0)
            sum += Number;
    }
    std::cout << sum;

    // Three (Задание: разработать программу вычисления суммы n членов ряда согласно условию задачи.)
    double x, t = 1, s = t;
    int n;
    std::cout << "x=";
    std::cin >> x;
    std::cout << "n=";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        t *= x / i;
        s += t * std::cos(M_PI / 4);
    }
    std::cout << "S =" << s << std::endl;

    return 0;
}
