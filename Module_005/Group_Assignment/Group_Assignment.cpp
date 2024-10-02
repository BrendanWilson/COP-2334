/******************************************************************************
Savings Account Balance Assignment
Write a program that calculates the balance of a savings account at the end of a
period of time. It should ask the user for the annual interest rate, the starting
balance, and the number of months that have passed since the account was
established. A loop should then iterate once for every month, performing the
following:

A. Ask the user for the amount deposited into the account during the month. (Do
   not accept negative numbers.) This amount should be added to the balance.

B. Ask the user for the amount withdrawn from the account during the month. (Do
not accept negative numbers.) This amount should be subtracted from the
balance.

C. Calculate the monthly interest. The monthly interest rate is the annual interest
rate divided by 12. Multiply the monthly interest rate by the balance, and add
the result to the balance.

Group Project members:
Chris Jules (main coder)
Brandon Valencia (input validation coder)
Brendan Wilson (final merging, debug, documentation, and repo provider)
********************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //variables definition
    double annualInterestRate;
    double balance;
    int numMonths;
    double depositPerMonth;
    double withdrawnPerMonth;
    double monthlyInterest;
    
    //prompt user for interest rate, starting balance
    // and number of months since account was established
    cout << "Please enter the annual interest rate: ";
    cin >> annualInterestRate;
    
    cout << "Enter your account's starting balance: ";
    cin >> balance;
    
    cout << "How long has the account been established (in month(s)): ";
    cin >> numMonths;
    cout << endl;
    
    
    for (int i = 0; i < numMonths && i >= 0; i++){
        
        //prompt user for amount deposited each month
        cout << "Please enter the amount deposited in month ";
        cout << (i+1) << ": ";
        cin >> depositPerMonth;
        //input validation by Brandon Valencia
        while(!(depositPerMonth>0))
        {
            cout<<"Please enter a valid non-negative amount: ";
            cin>>depositPerMonth;
        }
        balance += depositPerMonth;
        
        //prompt user for amount withdrawn each month
        cout << "Enter the amount withdrawn that month: ";
        cin >> withdrawnPerMonth;
        //input validation by Brandon Valencia
        while(!(withdrawnPerMonth>0))
        {
            cout<<"Please enter a valid non-negative amount: ";
            cin>>withdrawnPerMonth;
        }
        balance -= withdrawnPerMonth;
        
        //calculate monthly interest
        monthlyInterest = balance * (annualInterestRate/12);
        cout << "Your interest that month is $" << monthlyInterest << endl;
        balance += monthlyInterest;
        
        cout << endl;
    }
    
    //display current balance
    cout << "Your current account balance is $";
    cout << balance << endl;
    
    return 0;
}