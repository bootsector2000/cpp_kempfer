#ifndef TLOCATION_H
#define TLOCATION_H
#include <string>

using namespace std;

class TLocation
{
    private:
        string _section;
        string _rack;
    public:
        TLocation();
        TLocation(string, string);

        void setSection(string);
        void setRack(string);

        string getSection();
        string getRack();

        void print();
};

#endif // TLOCATION_H

