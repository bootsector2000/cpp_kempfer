#include "TLibrary.h"
#include <iostream>

/**************
* add vervollständigen
*****************/


TLibrary::TLibrary(string name, TAdress address)
{
    this->storeName = name;
    this->storeAdress = address;
}

TLibrary::~TLibrary()
{
    //dtor
}

void TLibrary::add(TMedium* medium)
{
    this->vMedia.push_back(medium);
}

void TLibrary::print()
{   unsigned int i=0;

    cout << "Bücherei Filiale " << this->storeName << endl;
    this->storeAdress.print();
    cout << "\n\nEs stehen " << this->vMedia.size() << " Medien zur Verfügung\n" << endl;

    for (;i < vMedia.size(); i++)
    {
        cout << "Medium Nr. " << i+1 << endl;
        this->vMedia[i]->print();
    }
}
