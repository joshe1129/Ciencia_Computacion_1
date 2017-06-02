#ifndef AERONAVE_H
#define AERONAVE_H


class Aeronave
{
    private:
        double altitud, velocidad;
    public:
        Aeronave()
    {
        altitud = 0;
        velocidad = 0;
    }
    virtual void despegue();
    void volar();
    void aterrizar();
};

#endif // AERONAVE_H
