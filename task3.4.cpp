#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int days, hours;
    cout << "Введите число дней: ";
    cin >> days;
    cout << "Введите число часов (1..8): ";
    cin >> hours;
    int total = 0;
    for (int d = 1; d <= days; d++) {
        for (int h = 1; h <= hours; h++) {
            cout << d << "-" << h << " ";
            total++;
        }
        cout << endl;
    }
    cout << "Всего измерений: " << total << endl;
    return 0;
}