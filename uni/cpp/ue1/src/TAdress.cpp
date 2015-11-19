#include "TAdress.h"
#include <stdio.h>

TAdress::TAdress()
{
    _street="";
    _houseNr="";
    _zipcode="";
    _city="";
}

TAdress::TAdress(string street, string houseNr, string zipcode, string city) {
    _street=street;
    _houseNr=houseNr;
    _zipcode=zipcode;
    _city=city;
}

void TAdress::setStreet(string street){
    _street=street;
}

void TAdress::setHouseNr(string houseNr){
    _houseNr=houseNr;
}

void TAdress::setZipcode(string zipcode){
    _zipcode=zipcode;
}

void TAdress::setCity(string city){
    _city=city;
}

string TAdress::getStreet(){
    return _street;
}

string TAdress::getHouseNr(){
    return _houseNr;
}

string TAdress::getZipcode(){
    return _zipcode;
}

string TAdress::getCity(){
    return _city;
}

void TAdress::print(){
    printf("%s %s \n%s %s",
        _street.c_str(), _houseNr.c_str(),
        _zipcode.c_str(), _city.c_str() );
}
