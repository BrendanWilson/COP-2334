/******************************************************************************
Patient Management System
Coders: 
    Britney Lloyd
    Brendan Wilson

Data for charges provided by Britney Lloyd

This program is designed to mimic the billing system used in medical facilities.

******************************************************************************/
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"
#include <iostream>
using namespace std;

// Displays the menu for hospital management system
void displayMenu();

int main() 
{
    // Initialize patient account, surgery, and pharmacy instances
    PatientAccount patient(600.0);
    Surgery surgery;
    Pharmacy pharmacy;

    int choice; // Variable for user menu selection
    do 
    {
        displayMenu();
        cin >> choice;

        switch (choice) 
        {
        case 1: 
        {
            int surgeryType = surgery.displaySurgeryMenu();
            surgery.performSurgery(patient, surgeryType); // Add surgery charges
            cout<<endl;
            break;
        }
        case 2: 
        {
            int medicationType=pharmacy.displayPharmacyMenu();
            pharmacy.prescribeMedication(patient, medicationType); // Add medication charges
            cout<<endl;
            break;
        }
        case 3: 
        {
            int days=0;
            cout << "\nEnter number of days in hospital(in whole days): ";
            cin >> days;
            while (days<1)
            {
                cout <<"\nPlease enter only positive numbers for the number of days in the hospital.";
                days=0;
                cout << "\nEnter number of days in hospital(in whole days): ";
                cin >> days;
            }
            patient.setDaysInHospital(days); // Update hospital stay days
            cout<<endl;
            break;
        }
        case 4: 
        {
            cout << "\nTotal charges: $" << patient.calculateTotal() << endl; // Display total charges
            cout<<endl;
            break;
        }
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl; // Handle invalid input
        }
    } while (choice != 0);

    return 0;
}

// The menu for hospital management system
void displayMenu() 
{
    cout << endl << "***Hospital Management System***" << endl;
    cout << "1. Add Surgery Charge" << endl;
    cout << "2. Add Medication Charge" << endl;
    cout << "3. Set Days in Hospital" << endl;
    cout << "4. Calculate Total Charges" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}
