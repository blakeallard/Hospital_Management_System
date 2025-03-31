//
// Created by ekalb on 3/16/2025.
//

#include "Patient.h"


Patient::Patient()
{
    name = "UNKNOWN";
    age  = 0;
}

Patient::~Patient()
{
    cout << "Deleting patient: " << name << endl;
}

void Patient::SetPatientInfo(string n, int a)
{
    name = n;
    age  = a;
}

void Patient::GetPatientInfo()
{
    cout << "\n\tEnter patient name: ";
    getline(cin, name);

    cout << "\n\tEnter patient age: ";
    cin  >> age;
    cin.ignore();
}

void Patient::DisplayPatientInfo()
{

        cout << "Patient Name: " << name << ", Age: " << age << "\n";
}