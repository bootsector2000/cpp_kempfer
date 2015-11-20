#ifndef TADRESS_H
#define TADRESS_H

#include <string>

using namespace std;

class TAdress
{
    private:
        string _street;
        string _houseNr;
        string _zipcode;
        string _city;

    public:
        TAdress();
        TAdress(string, string, string, string);

        void setStreet(string);
        void setHouseNr(string);
        void setZipcode(string);
        void setCity(string);

        string getStreet();
        string getHouseNr();
        string getZipcode();
        string getCity();

        void print();
};

#endif // TADRESS_H
