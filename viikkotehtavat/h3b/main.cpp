#include <iostream>
#include <memory>
#include "Animal.h"
#include "Dog.h"
using namespace std;

int main() {
    Animal a;
    Dog d;

    a.callOut();
    d.callOut();

    unique_ptr<Animal> animalDog = make_unique<Dog>();
    animalDog->callOut();

    return 0;
}
