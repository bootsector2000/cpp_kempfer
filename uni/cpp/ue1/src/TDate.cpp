#include "TDate.h"
#include <time.h>
#include <stdio.h>

TDate::TDate() {
    setToday();
}

TDate::TDate(int day, int month, int year){
    _day=day;
    _month=month;
    _year=year;
}

void TDate::setDate(int day, int month, int year) {
    _day=day;
    _month=month;
    _year=year;
}

void TDate::setToday(){
    time_t d;
    struct tm *td;

    d = time(NULL);
    td = localtime(&d);

    _day=td->tm_mday;
    _month=td->tm_mon+1;
    _year=td->tm_year+1900;
}

int TDate::getDay(){
    return _day;
}

int TDate::getMonth(){
    return _month;
}

int TDate::getYear(){
    return _year;
}

void TDate::print(){
    printf ("%02i.%02i.%4i",_day, _month, _year);
}

