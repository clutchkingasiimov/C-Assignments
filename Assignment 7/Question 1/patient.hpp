#include <iostream> 
#include <string>
#include <vector>
#include "blood.hpp"
#include "date.hpp"
#ifndef patient_hpp
#define patient_hpp 

using namespace std; 

class Patient{
    protected:
        string name; 
        vector <Blood> info; //The vector will store information of "Blood" type
    public:
        Patient(string nm){
            name = nm;
        }
        void addRecord(Blood blood){
            info.push_back(blood);
            cout << "Patient record added!" << endl;
        }
        void printReport(){
            int current_systolic = 0;
            int total_systolic; //Tracks the current systolic
            int index;
            float average;
            bool threshold = false;

            for (int i = 0; i < info.size(); i++){
                total_systolic += info[i].show_diastolic(); //Calculate this to find the average diastolic pressure later
                if(info[i].show_systolic() >= current_systolic){
                    current_systolic = info[i].show_systolic();
                    index = i;
                }
                if(info[i].show_systolic() > 140){
                    threshold = true;
                    cout << "Printing Blood Pressure Information" << endl;
                    cout << info[i].show_date().get_date() << " /" << info[i].show_date().get_month() << " /" 
                    << info[i].show_date().get_year() << " : " << "Systolic: " << info[i].show_systolic() << ", " 
                    << "Diastolic: " << info[i].show_diastolic() << endl;
                    cout << "Abnormal systolic prevalent in the patient" << endl;
                }
            }
            if(threshold == false){
                cout << "No abnormalities in systolic prevalent" << endl;
            }
            average = float(total_systolic)/float(info.size());
            cout << "Average diastolic pressure at: " << average << endl;
            cout << "Maximal systolic pressure is: " << info[index].show_systolic() << endl;
            cout << "Maxumal diastolic pressure is: " << info[index].show_diastolic() << endl;
            
        }

};
#endif