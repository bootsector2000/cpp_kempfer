#include "TTime.h"
#include <stdio.h>
#include <time.h>

TTime::TTime()
{
    setNow();
}

TTime::TTime(int hour, int minute, int second){
    _hour=hour;
    _min=minute;
    _sec=second;
}

void TTime::setTime(int hour, int minute, int second){
    _hour=hour;
    _min=minute;
    _sec=second;
}

void TTime::setNow(){
    time_t t;
    struct tm *ts;

    t = time(NULL);
    ts = localtime(&t);
    //printf("Aktuelle Zeit: %s", asctime(ts));
    _hour=ts->tm_hour;
    _min=ts->tm_min;
    _sec=ts->tm_sec;
}

int TTime::getHour(){
    return _hour;
}

int TTime::getMinute() {
    return  _min;
}

int TTime::getSecond() {
    return _sec;
}

void TTime::print() {
    printf ("%02i:%02i:%02i", _hour, _min, _sec);
}
