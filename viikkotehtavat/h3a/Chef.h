#ifndef CHEF_H
#define CHEF_H

#include <string>
#include <iostream>
using namespace std;

class Chef {
private:
    string name;

public:
    Chef(string inputName);
    ~Chef();

    string getName();
    void makeSalad();
    void makeSoup();
};

#endif
