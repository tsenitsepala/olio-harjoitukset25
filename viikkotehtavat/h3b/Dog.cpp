#include "Dog.h"
#include <iostream>
using namespace std;

Dog::~Dog() {
    cout << "Dog tuhoutuu" << endl;
}

void Dog::callOut() {
    cout << "Koira haukkuu!" << endl;
}
