#include "Pharmacy.h"

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
