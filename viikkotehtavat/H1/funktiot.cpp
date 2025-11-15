#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "funktiot.h"
using namespace std;

void calcSum(int a, int b) {
    cout << "Lukujen summa on: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
    } else {
        cout << "Lukujen osamaara on: " << (double)a / b << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

double retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<double>(a) / b;
}
