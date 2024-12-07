#include "Surgery.h"
#include <iostream>
using namespace std;

// Initializes fixed surgery charges
Surgery::Surgery()
{
    surgeryCharges[0] = 9508.00;
    surgeryCharges[1] = 15348.00;
    surgeryCharges[2] = 31281.00;
    surgeryCharges[3] = 7420.00;
    surgeryCharges[4] = 3349.00;
}

// Adds the cost of a performed surgery to the patient's account
void Surgery::performSurgery(PatientAccount& account, int surgeryType)
{
    if (surgeryType >= 0 && surgeryType < 5) // Validate surgery type
    { 
        account.addCharges(surgeryCharges[surgeryType]);
    }
}

//Display a menu of medications
int Surgery::displaySurgeryMenu()
{
    int surgeryType=0;
    cout << "\n";
    cout << "1. Kidney Stone Disintegration - Lithotripsy\n";
    cout << "2. Appendectomy - Inpatient\n";
    cout << "3. Heart Arrhythmia - Pacemaker Insertion- Inpatient\n";
    cout << "4. Gallbladder Removal - Laparoscopic - Outpatient\n";
    cout << "5. Overian Cyst - Removal\n";
    cout << "Enter surgery type (1-5): ";
    cin >> surgeryType;
    while (surgeryType<1||surgeryType>5)
    {
        cout<<"Please enter a valid surgery type.\n";
        surgeryType=0;
        cout << "\n";
        cout << "1. Kidney Stone Disintegration - Lithotripsy\n";
        cout << "2. Appendectomy - Inpatient\n";
        cout << "3. Heart Arrhythmia - Pacemaker Insertion- Inpatient\n";
        cout << "4. Gallbladder Removal - Laparoscopic - Outpatient\n";
        cout << "5. Overian Cyst - Removal\n";
        cout << "Enter surgery type (1-5): ";
        cin >> surgeryType;
    }
    return surgeryType-1;
}
