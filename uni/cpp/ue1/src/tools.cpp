#include "tools.h"
#include <iostream>

using namespace std;

void printStart(TDate D, TTime T, double version)
{
    cout << "----------------- Date: " ; D.print(); cout << endl;
    cout << "| *LibMan 3000* | Time: " ; T.print(); cout << endl;
    cout << "----------------- Ver : " << version << endl;
}
