#ifndef PHARMACY_H
#define PHARMACY_H

#include "PatientAccount.h"

// Handles medication charges for a patient
class Pharmacy
{
private:
    double medicationCharges[5]; // Fixed array for predefined medication costs

public:
    Pharmacy(); // Initializes medication charges
    void prescribeMedication(PatientAccount& account, int medicationType); // Adds medication charges
    int displayPharmacyMenu();// Displays a selection menu.
};

#endif // PHARMACY_H
