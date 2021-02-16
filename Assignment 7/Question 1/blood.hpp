#include <iostream> 
#include "date.hpp"
#ifndef blood_hpp 
#define blood_hpp 

class Blood{
    protected: 
        int systolic; 
        int diastolic;
        Date date;
    public:
        Blood(int sys, int dias, Date dt){
            systolic = sys; 
            diastolic = dias;
            date = dt;
        }
        int show_systolic(){
            return systolic;
        }
        int show_diastolic(){
            return diastolic;
        }
        Date show_date(){
            return date;
        }

};
#endif