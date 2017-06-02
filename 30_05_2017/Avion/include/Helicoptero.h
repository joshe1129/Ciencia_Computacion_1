#ifndef HELICOPTERO_H
#define HELICOPTERO_H

#include <Aeronave.h>


class Helicoptero : public Aeronave
{
   public:
        virtual void despegue();
        void volar();
        void aterrizar();
};

#endif // HELICOPTERO_H
