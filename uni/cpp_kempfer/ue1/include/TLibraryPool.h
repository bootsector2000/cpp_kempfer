#ifndef TLIBRARYPOOL_H
#define TLIBRARYPOOL_H

#include <cstring>
#include <vector>
#include "TPerson.h"
#include "TLibrary.h"

class TLibraryPool
{
    private:
        string name;
        TPerson* boss;
        vector<TLibrary*> libraries;
        vector<TPerson*> customers;

    public:
        TLibraryPool(string, TPerson*);
        ~TLibraryPool();

        void add(TLibrary*);
        void add(TPerson*);

        void print();

        string getName();
        string getBoss();
};

#endif // TLIBRARYPOOL_H
