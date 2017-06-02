#include <iostream>
#include "Aeronave.h"
#include "Avion.h"
#include "Helicoptero.h"
#include "Torre.h"
#include <vector>
using namespace std;

void do_it(Aeronave *a){
    a->despegue();
}


int main()
{
    Torre t;
    t.TC.push_back(new Aeronave);
    t.TC.push_back(new Avion);
    t.TC.push_back(new Helicoptero);
    for(size_t i=0;i<t.TC.size();i++)
    {
    do_it(t.TC[i]);
    }
    return 0;
}
