#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число дней (1..31): ";
    cin >> n;
    if ( n<1 || n> 31 ) { 
        cout << " Неверное количество дней"; 
        return 1; }
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double t = 5 + i % 7;
        cout << "День " << i << ": " << t << endl;
        sum = sum + t;
    }
    cout << "Средняя температура: " << sum / n << endl;
    return 0;
}
