#ifndef SURGERY_H
#define SURGERY_H

#include "PatientAccount.h"

// Handles surgery-related charges for a patient
class Surgery
{
private:
    double surgeryCharges[5]; // Fixed array for predefined surgery costs

public:
    Surgery(); // Initializes surgery charges
    void performSurgery(PatientAccount& account, int surgeryType); // Adds surgery charges
    void displaySurgeryMenu();// Displays a selection menu.
};

#endif // SURGERY_H