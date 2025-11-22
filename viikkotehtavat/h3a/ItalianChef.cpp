#include "ItalianChef.h"

ItalianChef::ItalianChef(string inputName) : Chef(inputName) {
    cout << "ItalianChef " << getName() << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << getName() << " makes pasta" << endl;
}
