#ifndef AVION_H
#define AVION_H

#include <Aeronave.h>


class Avion : public Aeronave
{
    public:
        virtual void despegue();
        void volar();
        void aterrizar();
};

#endif // AVION_H
