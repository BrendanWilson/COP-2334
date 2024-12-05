#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

#include "Account.h"
// Represents a patient's account, extending Account with hospital-specific details
class PatientAccount :
    public Account
{
private:
    int daysInHospital; // Number of days the patient stayed in the hospital
    double dailyRate; // Daily charge rate for hospital stay

public:
    PatientAccount(double rate = 500.0); // Constructor with default daily rate
    void setDaysInHospital(int days); // Sets the number of hospital days
    int getDaysInHospital() const; // Retrieves the number of hospital days
    double getDailyRate() const; // Retrieves the daily rate
    double calculateTotal(); // Calculates total charges including hospital stay
};

#endif // PATIENTACCOUNT_H
