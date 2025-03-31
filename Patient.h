//
// Created by ekalb on 3/16/2025.
//

#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
using namespace std;


const int MAX_PAT = 5;


class Patient
{
private:
    string name;
    int    age;

public:
    Patient();
    ~Patient();
    void SetPatientInfo(string n, int a);
    void GetPatientInfo();
    void DisplayPatientInfo();
};



#endif //PATIENT_H
