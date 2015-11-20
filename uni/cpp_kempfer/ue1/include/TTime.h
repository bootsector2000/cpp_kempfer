#ifndef TTIME_H
#define TTIME_H

class TTime
{
    private:
        int _hour;
        int _min;
        int _sec;

    public:
        TTime();
        TTime(int, int, int _sec = 0);

        void setTime(int, int, int = 0);
        void setNow();

        int getHour();
        int getMinute();
        int getSecond();

        void print();
};

#endif // TTIME_H
