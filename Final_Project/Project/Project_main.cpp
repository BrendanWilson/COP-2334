/******************************************************************************
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
            int surgeryType;
            cout << "Enter surgery type (0-4): ";
            cin >> surgeryType;
            surgery.performSurgery(patient, surgeryType); // Add surgery charges
            break;
        }
        case 2: 
        {
            int medicationType;
            cout << "Enter medication type (0-4): ";
            cin >> medicationType;
            pharmacy.prescribeMedication(patient, medicationType); // Add medication charges
            break;
        }
        case 3: 
        {
            int days;
            cout << "Enter number of days in hospital: ";
            cin >> days;
            patient.setDaysInHospital(days); // Update hospital stay days
            break;
        }
        case 4: 
        {
            cout << "Total charges: $" << patient.calculateTotal() << endl; // Display total charges
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
