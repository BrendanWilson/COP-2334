# Final Project

OPTION 1: Patient Management System

## Screenshot

### Instructions

This program should be designed and written by a team of students.
Here are some suggestions:
One or more students may work on a single class. The names, parameters and
 return types of each function and class member function should be decided in
  advance. The program will be best implemented as a multi-file program.

Write a program that computes a patient’s bill for a hospital stay.
 The different components of the program are:

The PatientAccount class will keep a total of the patient’s charges. It will
 also keep track of the number of days spent in the hospital. The group must
  decide on which hospital to use and gather necessary data such as getting
   the hospital’s daily rate – for each type of room.
The Surgery class will have stored within it the charges for at least five
 types of surgery. It can update the charges variable of the PatientAccount
  class.
The Pharmacy class will have stored within it the price of at least five types
 of medication. It can be update the charges variable of the PatientAccount
  class.

The main program.

The main program should have a main menu that allows the user to enter type of
 surgery, enter one or more types of medication, and check the patient out of
  the hospital. When the patient checks out, the total charges should be
   displayed.

Files needed for the project:

Main
PatientAccount class declaration
PatientAccount function definitions
Surgery class declaration
Surgery function definitions
Pharmacy class declaration
Pharmacy function definitions CORE COMPONENTS

Base Class: Account:
Represents shared functionalities for accounts (e.g., tracking charges).
Attributes:
totalCharges: Total cost of all services.
Methods:
addCharges(double charge): Adds a specific charge to totalCharges.

Derived Class: PatientAccount (inherits from Account):
Manages patient-specific details and hospital stay charges.
Attributes:
daysInHospital: Number of days spent by the patient.
dailyRate: Cost per day for the room.
Methods:
calculateTotal(): Computes the total bill by adding room charges to totalCharges.

Class: Surgery:
Stores charges for various surgeries and interacts with PatientAccount.
Attributes:
Charges for at least 5 types of surgeries (e.g., appendectomy, bypass).
Methods:
performSurgery(int surgeryType, PatientAccount &account): Updates the total
 charges for a surgery.

Class: Pharmacy:
Manages medication prices and interacts with PatientAccount.
Attributes:
Prices for at least 5 medications (e.g., antibiotics, painkillers).
Methods:
prescribeMedication(int medicationType, PatientAccount &account): Updates the
 total charges for medication.

Main Program:
Provides a menu interface for users to:
Enter the number of days in the hospital.
Add surgery charges.
Add medication charges.
Calculate and display the final bill.
MAIN PROGRAM EXAMPLE:

int main() {
    PatientAccount patient(3, 200.0);  // 3 days, $200/day
    Surgery surgery;
    Pharmacy pharmacy;

    // Simulate adding charges
    surgery.performSurgery(2, patient);    // Add 3rd surgery type
    pharmacy.prescribeMedication(1, patient);  // Add 2nd medication type

    // Display total charges
    cout << "Total Charges: $" << patient.calculateTotal() << endl;

    return 0;
}

#### Coding Plan

1. For each class there will be a header and associated source code file.
2. The classes are Account, PatientAccount, Surgery, Pharmacy.
