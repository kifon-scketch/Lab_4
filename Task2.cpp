#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    long long a, b;
    cout << "Введите два натуральных числа a и b: ";
    cin >> a >> b;

    int swaps = 0;

    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
        swaps++;
    }

    cout << "НОД: " << a << endl;
    cout << "Количество замен: " << swaps << endl;

    return 0;
}
