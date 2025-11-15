#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main() {
    // olio pinomuisti
    Car car1;
    car1.setBrand("Volvo");
    car1.setModel("EX30");
    car1.setYearModel(2024);
    car1.printData();

    // olio kekomuisti
    Rectangle* rect = new Rectangle;
    rect->setWidth(6.0);
    rect->setHeight(2.0);
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ymparysmitta: " << rect->getCircum() << endl;
    delete rect;
    rect = nullptr;

    // olio smart pointteri
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Aleksi");
    student->setStudentNumber(4539857);
    student->setAverage(5);
    cout << "Oppilas: " << student->getName() << ", Opiskelijanumero: " << student->getStudentNumber()
         << ", Keskiarvo: " << student->getAverage() << endl;

    return 0;
}

