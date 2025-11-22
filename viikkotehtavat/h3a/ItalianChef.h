#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string inputName);
    ~ItalianChef();

    void makePasta();
};

#endif
