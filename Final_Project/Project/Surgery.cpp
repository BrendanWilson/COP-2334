#include "Surgery.h"

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
