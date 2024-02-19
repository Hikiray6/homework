#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "Введите шестизначное число: ";
    cin >> num;
    if (num < 100000 || num > 999999) {
        cout << "Число должно быть шестизначным.\n";
        return 1;
    }
    vector<int> digits;
    int temp = num;
    while (temp != 0) {
        digits.insert(digits.begin(), temp % 10);
        temp /= 10;
    }
    cout << "Цифры числа: ";
    for (int digit : digits) {
        cout << digit << " ";
    }
    cout << "\n";
    cout << "В двоичной системе: ";
    for (int digit : digits) {
        for (int i = 2; i >= 0; --i) {
            cout << ((digit >> i) & 1);
        }
        cout << " ";
    }
    cout << "\n";
    return 0;
}
