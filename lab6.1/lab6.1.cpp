#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
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
    return 0;
}
