#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int v;
    do {
        cout << "Введите влажность (0..100): ";
        cin >> v;
    } while (v < 0 || v > 100);
    cout << "До 100% осталось: " << 100 - v << "%" << endl;
    return 0;
}