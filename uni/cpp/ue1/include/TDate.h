#ifndef TDATE_H
#define TDATE_H


class TDate
{
    private:
        int _day;
        int _month;
        int _year;

    public:
        TDate();
        TDate(int ,int ,int );

        void setDate(int , int, int);
        void setToday();

        int getDay();
        int getMonth();
        int getYear();

        void print();
};

#endif // TDATE_H
