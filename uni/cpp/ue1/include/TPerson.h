#ifndef TPERSON_H
#define TPERSON_H
#include <string>
#include "TAdress.h"
#include "TDate.h"

using namespace std;

class TPerson
{
    private:
        string name;
        TAdress address;
        TDate dob;      //Date of birth

    public:
        TPerson();
        TPerson(string, TAdress, TDate);
        ~TPerson();

        void setName(string);
        void setAddress(TAdress);
        void setDob(TDate);

        string getName();
        TAdress getAddress();
        TDate getDob();

        void print();
};

#endif // TPERSON_H
