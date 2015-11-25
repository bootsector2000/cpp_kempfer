#include "tools.h"
#include <iostream>

using namespace std;

void printStart(TDate D, TTime T, double version)
{
    cout << "----------------- Date: " ; D.print(); cout << endl;
    cout << "| *LibMan 3000* | Time: " ; T.print(); cout << endl;
    cout << "----------------- Ver : " << version << endl;
}

string statusToString(int status)
{
    switch(status)
    {
        case 1: return "verfügbar";
        case 2: return "ausgeliehen";
        case 4: return "bestellt";
        case 8: return "reserviert";
        default: return "kein status";
    }
}
