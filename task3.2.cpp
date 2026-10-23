#include <iostream>
using namespace std;
int main() {
    double t = 0;
    int count = 0;   
    int neg = 0;     
    cout << "Вводите температуру (999 - конец):" << endl;
    while (t != 999) {
        count++;
        if (t < 0) {
            neg++;
        }
        cin >> t;
    }
    cout << "Введено температур: " << count << endl;
    cout << "Отрицательных: " << neg << endl;
    return 0;
}
