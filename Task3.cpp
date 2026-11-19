#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int temp;
    int validCount = 0;
    int above20Count = 0;
    int streak = 0;

    cout << "Вводите температуры (от -20 до 40):" << endl;

    do {
        cin >> temp;
        if (temp < -20 || temp > 40) {
            continue;
        }
        validCount++;

        if (temp > 20) {
            above20Count++;
            streak++;
        }
        else {
            streak = 0; 
        }

    } while (streak < 3);

    cout << "Число принятых измерений: " << validCount << endl;
    cout << "Количество значений выше 20: " << above20Count << endl;

    return 0;
}
