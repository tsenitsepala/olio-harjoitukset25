#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
using namespace std;

int main() {
    Chef chef("Gordon Ramsay");
    chef.makeSalad();
    chef.makeSoup();

    ItalianChef iChef("Anthony Bourdain");
    iChef.makeSalad();
    iChef.makeSoup();
    iChef.makePasta();

    cout << "name of the Italian Chef is " << iChef.getName() << endl;

    return 0;
}
