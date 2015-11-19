#include <iostream>
#include "TDate.h"
#include "TTime.h"
#include "TAdress.h"
#include "TLocation.h"
#include "TPerson.h"
#include "TMedium.h"
#include <stdio.h>
#include "tools.h"

using namespace std;

int main()
{
    double version = 0.11;

    TDate D1, D2(3, 10, 2015);
    TTime T1, T2(14,15);

    TAdress A1 ("Luxemburger Str.", "10", "D-10335", "Berlin");
    TAdress myAddress ("Siegfriedstraße", "25", "D-10365", "Berlin");

    TLocation L1, L2("Technik", "Computer");

    TDate myDob(24,06,1988);    //date of Birth

    TPerson Tom ("Tom Wollmann", myAddress, myDob);

    printStart(D1, T1, version);

    TMedium *M1 = new TMedium("Buchtitel", "Buchsignatur", L2, 18, 1);

    /*cout << "\nKlasse TDate:" << endl;
    cout << "Tag der deutschen Einheit: " ; D2.print(); cout << endl;

    cout << "\nKlasse TTime:" << endl;
    cout << "Vorlesungsbeginn: "; T2.print(); cout << endl;

    cout << "\nKlasse TAdress:" << endl;
    cout << "Meine Adresse:\n"; myAddress.print(); cout << endl;

    cout << "\nKlasse TLocation:" << endl;
    cout << "Standardkonstruktor neue Bücher: "; L1.print() ; cout << endl;
    cout << "Konstruktor Abteilung Technik, Computerregal: "; L2.print(); cout << endl;

    cout << "\nKlasse TAdress:" << endl;
    cout << "Beuth Hochschule für Technik Berlin:\n" ; A1.print(); cout << endl;

    cout << "\nKlasse TPerson:" << endl;
    cout << "Konstruktor Tom:\n" ; Tom.print(); cout << endl;*/

    return 0;
}
