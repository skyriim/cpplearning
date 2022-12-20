#ifndef TIMETEST_H
#define TIMETEST_H

#include <ctime>
#include <string>

class timeprint {
    public:
        timeprint();
        timeprint(time_t now);
        time_t getTime_t();
        tm* getTm();
        std::string gettimestr();
        static void printNowStr();
    private:
        time_t nowtime_t;

};
#endif