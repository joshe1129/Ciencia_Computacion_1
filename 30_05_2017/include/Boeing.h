#ifndef BOEING_H
#define BOEING_H


#include <Avion.h>

class Boeing: public Avion
{
    public:
       virtual int despegue();
       int aterrizaje();
};

#endif // AIRBUS_H
