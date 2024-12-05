#include "PatientAccount.h"

// Initializes daily rate and sets days in hospital to zero
PatientAccount::PatientAccount(double rate) : dailyRate(rate), daysInHospital(0) {}

// Updates the number of days spent in the hospital
void PatientAccount::setDaysInHospital(int days) 
{
    daysInHospital = days;
}

// Returns the number of days spent in the hospital
int PatientAccount::getDaysInHospital() const
{
    return daysInHospital;
}

// Retrieves the daily rate for hospital stay
double PatientAccount::getDailyRate() const 
{
    return dailyRate;
}

// Calculates total charges including daily hospital stay charges
double PatientAccount::calculateTotal() 
{
    return totalCharges + (daysInHospital * dailyRate);
}
