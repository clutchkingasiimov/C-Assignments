#include <iostream>
#ifndef date_hpp
#define date_hpp 
using namespace std;

class Date{
    private: 
        int day, month, year;
    public:
        Date(){
            day = 0;
            month = 0;
            year = 0;
        }
        Date(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }

        int get_date(){
            return day;
        }
        int get_month(){
            return month;
        }
        int get_year(){
            return year;
        }
        void displayDate(){
            cout << day << " /" << month << " /" << year << endl;
    }
};
#endif 