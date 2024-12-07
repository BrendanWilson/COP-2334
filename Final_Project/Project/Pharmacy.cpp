#include "Pharmacy.h"
#include <iostream>
using namespace std;

// Initializes fixed medication charges
Pharmacy::Pharmacy()
{
    medicationCharges[0] = 93.49;
    medicationCharges[1] = 49.09;
    medicationCharges[2] = 72.99;
    medicationCharges[3] = 462.99;
    medicationCharges[4] = 37.99;
}

// Adds the cost of prescribed medication to the patient's account
void Pharmacy::prescribeMedication(PatientAccount& account, int medicationType)
{
    if (medicationType >= 0 && medicationType < 5) // Validate medication type
    { 
        account.addCharges(medicationCharges[medicationType]);
    }
}

//Display a menu of medications
int Pharmacy::displayPharmacyMenu()
{
    int medicationType=0;
    cout << "\n";
    cout << "1. Nystatin Oral Susp 100000unit/ml\n";
    cout << "2. Lidocaine 2% Visc Oral Solution\n";
    cout << "3. Ondansetron ODT 4mg Tablets\n";
    cout << "4. Advair Diskus 250/50mcg (yellow) 60\n";
    cout << "5. Albuterol HFA Inh (200 Puffs) 6.7gm\n";
    cout << "Enter medication type (1-5): ";
    cin >> medicationType;
    while (medicationType<1||medicationType>5)
    {
        cout<<"\nPlease enter a valid medication type.\n";
        medicationType=0;
        cout << "1. Nystatin Oral Susp 100000unit/ml\n";
        cout << "2. Lidocaine 2% Visc Oral Solution\n";
        cout << "3. Ondansetron ODT 4mg Tablets\n";
        cout << "4. Advair Diskus 250/50mcg (yellow) 60\n";
        cout << "5. Albuterol HFA Inh (200 Puffs) 6.7gm\n";
        cout << "Enter medication type (1-5): ";
        cin >> medicationType;
    }
    return medicationType-1;            
}
