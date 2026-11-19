#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите n (1..31): ";
    cin >> n;

    double sum = 0;
    int frostDays = 0;

    int currentStreak = 0;
    int currentStart = 0;

    int maxStreak = 0;
    int bestStart = 0;

    for (int day = 1; day <= n; ++day) {
        int temp;
        cin >> temp;
        sum += temp;

        if (temp < 0) {
            frostDays++;
            if (currentStreak == 0) {
                currentStart = day;
            }
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
                bestStart = currentStart;
            }
        }
        else {
            currentStreak = 0;
        }
    }

    cout << "Средняя температура: " << (sum / n) << endl;
    cout << "Число морозных дней: " << frostDays << endl;
    cout << "Самая длинная серия и её первый день: " << maxStreak << " " << bestStart << endl;

    return 0;
}
