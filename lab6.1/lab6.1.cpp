#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    // One
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
    // Two
    int Number, sum(0);
    while (std::cin >> Number && Number != 0)
    {
        if (Number > 0)
            sum += Number;
    }
    std::cout << sum;

    return 0;
}
