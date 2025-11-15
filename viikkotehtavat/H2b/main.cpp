#include <iostream>
#include <vector>
#include "car.h"
    using namespace std;

    int main() {
        vector<Car> carList;

        carList.emplace_back("Volvo", "EX30", 2024);
        carList.emplace_back("Toyota", "Corolla", 2022);
        carList.emplace_back("Ford", "Mustang", 1999);

        cout << "Auton tiedot:" << endl;
        carList[1].printData();

        cout << "Kaikki autot:" << endl;
        for (const Car &car : carList) {
            car.printData();
        }

        return 0;
    }
