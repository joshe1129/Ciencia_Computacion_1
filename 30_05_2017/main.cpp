#include <iostream>
#include "Gizmo.h"
#include "Gadget.h"
#include "Widget.h"
#include <vector>
#include "Avion.h"
#include "Boeing.h"
#include "Airbus.h"

using namespace std;


void do_it(Widget *w){
    cout<<w->f()<<" ";
}

int main()
{
    vector<Widget *> widgets;
    Widget wid;
    Gadget gad;
    Gizmo giz;
    widgets.push_back(&wid);
    widgets.push_back(&gad);
    widgets.push_back(&giz);
    for(size_t i=0;i<widgets.size();i++)
    {
        do_it(widgets[i]);
    }
    return 0;
}
