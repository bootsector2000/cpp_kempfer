#ifndef TLIBRARYPOOL_H
#define TLIBRARYPOOL_H

#include "TPerson.h"
#include "TLibrary.h"
#include "TPerson.h"
#include <vector>


class TLibraryPool
{
    private:
        string name;
        TPerson* boss;
        vector<TLibrary*> libraries;
        vector<TPerson*> customers;

    public:
        TLibraryPool(string, TPerson*, vector<TLibrary*>, vector<TPerson*>);
        ~TLibraryPool();

        void add(TLibrary);
        void add(TPerson);
};

#endif // TLIBRARYPOOL_H
