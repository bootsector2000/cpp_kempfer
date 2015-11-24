#include "TLibraryPool.h"
#include <cstdio>
#include <iostream>


/************************
* beide add implementieren
***************************/

TLibraryPool::TLibraryPool(string name, TPerson* boss)
{
    this->name = name;
    this->boss = boss;
}

TLibraryPool::~TLibraryPool()
{
    printf ("Bibliothek %s gelöscht!", this->getName().c_str());
}

void TLibraryPool::add(TLibrary* library)
{
    this->libraries.push_back(library);
}

void TLibraryPool::add(TPerson* customer)
{
    this->customers.push_back(customer);
}

string TLibraryPool::getName()
{
    return this->name;
}

string TLibraryPool::getBoss()
{
    return this->boss->getName();
}

void TLibraryPool::print()
{
    unsigned int i = 0;
    unsigned int j = 0;

    printf("%s, \nLeitung: %s", getName().c_str(),
                                getBoss().c_str());
    this->boss->print();

    cout << "\n\nZum Büchereiverbund gehören " << this->libraries.size() << " Filialen:\n" << endl;


    for (; i<libraries.size();i++)
    {
        this->libraries[i]->print();
    }

    cout << "Der Büchereiverbund hat " << this->customers.size() << " Kunden:\n" << endl;

    for (; j<customers.size();j++)
    {
        customers[j]->print();
    }

}
