#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "funktiot.h"
using namespace std;

int main() {
    int a, b;
    cout << "Anna luku: ";
    cin >> a;
    cout << "Anna luku: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    try {
        double result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "error: " << e.what() << endl;
    }

    return 0;
}
