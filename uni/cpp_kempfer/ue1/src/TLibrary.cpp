#include "TLibrary.h"

/**************
* add vervollständigen
*****************/


TLibrary::TLibrary(string name, TAdress address, vector<TMedium*> vMedia)
{
    this->storeName = name;
    this->storeAdress = address;
    this->vMedia = vMedia;
}

TLibrary::~TLibrary()
{
    //dtor
}

void TLibrary::add(TMedium medium)
{
    //blub
}
