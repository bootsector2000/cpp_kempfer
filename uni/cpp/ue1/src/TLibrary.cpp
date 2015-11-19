#include "TLibrary.h"

/***********************
*Vektor einbinden
*add vervollständigen
************************/

TLibrary::TLibrary(string name, TAdress address, vector<TMedium*> medien)
{
    this->storeName = name;
    this->storeAdress = address;

}

TLibrary::~TLibrary()
{
    //dtor
}

void TLibrary::add(TMedium medium)
{
    //blub
}
