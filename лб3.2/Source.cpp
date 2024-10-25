#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, F1, F2;

    
    cout << " a= ";
    cin >> a;
    cout << " b= ";
    cin >> b;
    cout << " c= ";
    cin >> c;
    cout << " x= ";
    cin >> x;

    // 1. Реалізація за допомогою скороченої форми розгалуження
    F1 = (x < 0 && b != 0) ? (a * x * x - b * x * x) :
        (x > 0 && b == 0) ? (x - a) / (x - c) :
        x + 5 / (c * (x - 10));

    // 2. Реалізація за допомогою повної форми розгалуження
    if (x < 0 && b != 0) {
        F2 = a * x * x - b * x * x;
    }
    else if (x > 0 && b == 0) {
        F2 = (x - a) / (x - c);
    }
    else {
        F2 = x + 5 / (c * (x - 10));
    }

    cout << "1 F = " << F1 << endl;
    cout << "2 F = " << F2 << endl;

    return 0;
}