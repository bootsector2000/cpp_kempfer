#include "TPerson.h"
#include <stdio.h>

TPerson::TPerson()
{
    this->name="insert name!";
    //this->address="insert address!";
    //this->dob="insert dob!";
}

TPerson::TPerson(string name, TAdress address, TDate dob)
{
        this->name=name;
        this->address=address;
        this->dob=dob;      //date of birth
}

TPerson::~TPerson()
{
   printf ("\n---------\n-- Person %s gelöscht!\n---------", this->getName().c_str());
}

void TPerson::setName(string name){
    this->name=name;
}

void TPerson::setAddress(TAdress address) {
    this->address=address;
}

void TPerson::setDob(TDate dob) {
    this->dob=dob;
}

string TPerson::getName() {
    return this->name;
}

TAdress TPerson::getAddress() {
    return this->address;
}

TDate TPerson::getDob() {
    return this->dob;
}

void TPerson::print() {
    printf ("%s\n%s %s\n%s %s",
     this->name.c_str(),
     this->address.getStreet().c_str(), this->address.getHouseNr().c_str(),
     this->address.getZipcode().c_str(), this->address.getCity().c_str());
}
