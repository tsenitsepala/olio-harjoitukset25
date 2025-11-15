#include "car.h"
using namespace std;

Car::Car(string b, string m, int y) : brand(b), model(m), yearModel(y) {}

void Car::printData() const {
    cout << "Merkki: " << brand << ", Malli: " << model << ", Valmistusvuosi: " << yearModel << endl;
}
