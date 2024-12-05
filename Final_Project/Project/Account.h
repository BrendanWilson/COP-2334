#ifndef ACCOUNT_H
#define ACCOUNT_H

// Base class to track total charges for accounts
class Account 
{
protected:
    double totalCharges; // Stores the total charges accumulated

public:
    Account(); // Constructor to initialize the account's total charges
    void addCharges(double charge); // Adds a charge to the account's total
    double getTotalCharges() const; // Returns the total of charges (const for safety against mods)
};

#endif // ACCOUNT_H
