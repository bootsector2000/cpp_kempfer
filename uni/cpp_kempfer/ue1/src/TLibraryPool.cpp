#include "TLibraryPool.h"

/************************
* Destruktor vervollständigen
* beide add implementieren
***************************/

TLibraryPool::TLibraryPool(string name, TPerson* boss, vector<TLibrary*> libraries, vector<TPerson*> customers)
{
    this->name = name;
    this->boss = boss;
    this->libraries = libraries;
    this->customers = customers;
}

TLibraryPool::~TLibraryPool()
{
    //dtor
}

void TLibraryPool::add(TLibrary* library)
{
    //blub
}

void TLibraryPool::add(TPerson* customer)
{
    //blub
}
