#include "Patient.h"


int main()
{
    Patient *patients[MAX_PAT];
    int numPatients    = 0;
    int patientAge     = 0;
    string patientName = "";


    do
    {
        cout << "How many patients are you entering today?: ";
        cin  >> numPatients;
        cin.ignore();
    } while (numPatients < 0 || numPatients > MAX_PAT);


    for (int i = 0; i < numPatients; i++)
    {
        patients[i] = new Patient();
    }

    for (int i = 0; i < numPatients; i++)
    {
        cout << "Patient #" << i + 1 << ": ";
        patients[i]->GetPatientInfo();
    }

    for (int i = 0; i < numPatients; i++)
    {
        patients[i]->DisplayPatientInfo();
    }

    for (int i = 0; i < numPatients; i++)
    {
        delete patients[i];
    }

    return 0;
}

