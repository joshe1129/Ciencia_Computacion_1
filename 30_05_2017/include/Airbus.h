#ifndef AIRBUS_H
#define AIRBUS_H

#include <Avion.h>


class Airbus : public Avion
{
    public:
        virtual int despegue();
        int aterrizaje();
};

#endif // AIRBUS_H
