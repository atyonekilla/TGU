#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
namespace Ex {
    class Math {
    public:
        int factor(double num) {
            long double factorial = 1.0;
            for (int i = 1; i <= num; ++i) {
                factorial *= i;
            }
            return factorial;
        }
    };

    class Four {
    public:
        double f1(double x)
        {
            return std::log(std::abs(1 + x));
        }
        double f2(double x)
        {
            return std::pow(M_E, -x);
        }
        double f3(double x)
        {
            return std::cos(x);
        }
    private:
        double x;
    };

    class Five {
    public:
        Math m;
        double f1(double x)
        {
            double Sum(0);
            for (int k = 1; k <= 8; k++) {
                Sum += ((std::pow(-1, k) * std::pow(x, k)) / m.factor(k));
            }
            return Sum;
        }
        double f2(double x)
        {
            return std::tan(std::pow(M_PI, x));
        }
    };
}
int main()
{
    setlocale(LC_ALL, "ru");
    Ex::Four four;
    Ex::Five five;
    //2.1 One (Операторы цикла с предусловием и постусловием) | Задание: разработать программу согласно заданию.
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

    //2.2 Two (Задание: разработать программу согласно заданию.)
    int Number, sum(0);
    while (std::cin >> Number && Number != 0)
    {
        if (Number > 0)
            sum += Number;
    }
    std::cout << sum << std::endl;

    //3. Three (Вычисление бесконечных сумм) | Задание: разработать программу вычисления суммы n членов ряда согласно условию задачи.
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

    //4.1 Four (Табулирование функций) | разработать программу табулирования функции на заданном промежутке с шагом 0.2
    int inputX;
    std::cin >> inputX;
    if (inputX > 3.8) {
        for (float x = -1; x <= 15; x += .2)
        {
            std::cout << "x = " << x << " y = " << four.f1(x) << std::endl;
        }
    }
    if ((inputX >= 2.8) && (inputX <= 3.8)) {
        for (float x = -1; x <= 15; x += .2)
        {
            std::cout << "x = " << x << " y = " << four.f2(x) << std::endl;
        }
    }
    if (inputX < 2.8) {
        for (float x = -1; x <= 15; x += .2)
        {
            std::cout << "x = " << x << " y = " << four.f3(x) << std::endl;
        }
    }

    /* 4.2 Five (Табулирование функций) | разработать программу табулирования функции f(x)
    на на промежутке x∈[xн; xк] с шагом h */
    int inpX;
    std::cin >> inpX;
    static float h = 1.1;
    if (inpX > 0) {
        for (float x = -3; x <= 2.5; x += h)
        {
            std::cout << "x = " << x << " y = " << five.f1(x) << std::endl;
        }
    }
    if (inpX <= 0) {
        for (float x = -3; x <= 2.5; x += h)
        {
            std::cout << "x = " << x << " y = " << five.f2(x) << std::endl;
        }
    }

    return 0;
}
