#ifndef TLIBRARY_H
#define TLIBRARY_H

#include "TAdress.h"
#include "TMedium.h"
#include <vector>


class TLibrary
{
    private:
        string storeName;
        TAdress storeAdress;
        vector<TMedium*> vMedia;

    public:
        TLibrary(string, TAdress);
        ~TLibrary();
        void add(TMedium*);

        void print();
};

#endif // TLIBRARY_H
