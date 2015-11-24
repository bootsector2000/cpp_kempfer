#ifndef TMEDIUM_H
#define TMEDIUM_H

#include <string.h>
#include "TLocation.h"

class TMedium
{
    private:
        string title;
        string signature;
        TLocation location;
        int fsk;

        int status;

    public:

        const static int verfuegbar = 0b0001;   //0001
        const static int ausgeliehen = 0b0010;  //0010
        const static int bestellt = 0b0100;     //0100
        const static int reserviert = 0b1000;   //1000

        TMedium();
        TMedium(string, string, TLocation, int, int);
        ~TMedium();

        void setTitle(string);
        void setSignature(string);
        void setLocation(TLocation);
        void setFSK(int);
        void setStatus(int);
        void print();

        string getTitle();
        string getSignature();
        TLocation getLocation();
        int getFSK();
        int getStatus();
};

#endif // TMEDIUM_H
