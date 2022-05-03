#include <iostream>
#include <cmath>
#include <conio.h>
#include <limits>

using namespace std;

float factorial(float n) {
    float res = 1;
    if (n > 1)
        res = n * factorial(n - 1);
    return res;
}

void one() {
    float k,sum = 0;
    cout << "Ввод : ";
    cin >> k;
    for (float i = -2; i <= k; i++) {
        if (i > INT_MAX || i < INT_MIN)
            continue;
        if (i != 0) {
            sum += (pow(-1, i) * factorial(i + 3)) / i - 4;
        }
    }
    cout <<"Ответ : " << sum;
}

void two() {
    float n, sum = 0;
    int k = 0;
    cout << endl << "Ввод : ";
    cin >> n;
    for (k = k - 1; k <= n; k++) {
        if (k > INT_MAX || k < INT_MIN)
            continue;
        if (k != 0) {
            sum += (pow(-1, k) * (pow(k, 3) - 27)) / 3 * factorial(k + 2);
        }
    }
    cout << "Ответ : " << sum;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    one();
    two();

    _getch();
    return 0;
}