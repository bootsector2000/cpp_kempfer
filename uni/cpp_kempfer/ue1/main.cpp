#include <iostream>
#include "TDate.h"
#include "TTime.h"
#include "TAdress.h"
#include "TLocation.h"
#include "TPerson.h"
#include "TMedium.h"
#include <stdio.h>
#include "tools.h"
#include "TLibraryPool.h"

using namespace std;

int main()
{
 TDate D1(17, 11, 1963);
 TLocation L1("Technik", "Computer");
 TLocation L2("Romane", "Krimi");
 TLocation L3("Kinder", "Comics");
 TLocation L4("DVDs", "Horror");

 TAdress A1("Buchallee", "15a", "13315", "Berlin");
 TAdress A2("Schlossstr.", "117", "12077", "Berlin");

 TPerson *Leitung = new TPerson("Egon Mustermann", A2, D1);
 TPerson *K1 = new TPerson("Marion Schulz", A1, D1);
 TPerson *K2 = new TPerson("Stefan Meier", A2, D1);

 TMedium *M1 = new TMedium("Programmieren in C", "PC99", L1, 0, TMedium::ausgeliehen);
 TMedium *M2 = new TMedium("Der Hexer", "He83", L2, 12, TMedium::verfuegbar);
 TMedium *M3 = new TMedium("Asterix und Obelix", "KC17", L3, 0, TMedium::verfuegbar);
 TMedium *M4 = new TMedium("Der Werwolf", "WW175", L4, 16, TMedium::ausgeliehen);

 TLibrary *LWedding = new TLibrary("Wedding", A1);
 TLibrary *LSteglitz = new TLibrary("Steglitz", A2);
 TLibraryPool LP("Buechereiverband Berlin", Leitung);

 LWedding->add(M1);
 LWedding->add(M2);

 LSteglitz->add(M3);
 LSteglitz->add(M4);
 LP.add(LWedding);
 LP.add(LSteglitz);
 LP.add(K1);
 LP.add(K2);
 LP.print();

 return 0;
}
