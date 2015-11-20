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
        TLibrary(string, TAdress, vector<TMedium*>);
        ~TLibrary();
        void add(TMedium);
};

#endif // TLIBRARY_H
