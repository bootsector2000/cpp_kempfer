#include "TMedium.h"
#include <stdio.h>


TMedium::TMedium()
{
    this->title = "insert title!";
    this->signature = "insert signature!";
   // this->location = "insert location!";
    this->fsk = 0;
    //this->status ="insert status!";
}

TMedium::TMedium(string title, string signature, TLocation location, int fsk, int status)
{
    this->title = title;
    this->signature = signature;
    this->location = location;
    this->fsk = fsk;
    this->status = status;
}

TMedium::~TMedium()
{
    printf ("Medium %s gelöscht!", this->getTitle().c_str());
}


void TMedium::setTitle(string title)
{
    this->title = title;
}
void TMedium::setSignature(string signature)
{
    this->signature = signature;
}

void TMedium::setLocation(TLocation location)
{
    this->location = location;
}
void TMedium::setFSK(int fsk)
{
    this->fsk = fsk;
}
void TMedium::setStatus(int status)
{
    this->status = status;
}

string TMedium::getTitle()
{
    return this->title;
}
string TMedium::getSignature()
{
    return this->signature;
}
TLocation TMedium::getLocation()
{
    return this->location;
}
int TMedium::getFSK()
{
    return this->fsk;
}
int TMedium::getStatus()
{
    return 1;
}

void TMedium::print()
{

}
