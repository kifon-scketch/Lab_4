#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int B;
    cout << "Введите базовую температуру B (-10..20): ";
    cin >> B;

    int positiveCount = 0;

    for (int i = 1; i <= 7; ++i) {
        for (int j = 1; j <= 6; ++j) {
            int temp = B + i - 2 * j;

            if (temp < 0) {
                cout << "- ";
            }
            else if (temp == 0) {
                cout << "0 ";
            }
            else {
                cout << "+ ";
                positiveCount++;
            }
        }
        cout << endl;
    }

    cout << "Количество положительных ячеек: " << positiveCount << endl;

    return 0;
}
