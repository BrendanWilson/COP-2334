#include "Account.h"

// Constructor initializes totalCharges to 0
Account::Account() : totalCharges(0.0) {}

// Adds a charge to totalCharges
void Account::addCharges(double charge) 
{
    totalCharges += charge;
}

// Returns the current totalCharges
double Account::getTotalCharges() const 
{
    return totalCharges;
}
