#ifndef TDATE_H
#define TDATE_H

#include <fstream>
#include <iostream>

using namespace std;

class TDate
{
    private:
        int _day;
        int _month;
        int _year;

        //ifstream fs&;

    public:
        TDate();
        TDate(int ,int ,int );

        void setDate(int , int, int);
        void setToday();

        int getDay();
        int getMonth();
        int getYear();

        void print();
      //  void load(fs&);
};

#endif // TDATE_H
