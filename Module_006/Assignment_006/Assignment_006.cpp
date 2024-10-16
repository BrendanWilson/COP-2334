/******************************************************************************
Write a program that calculates the average number of days a company's
employees are absent. The program should have the following functions:

. A function called by main that asks the user for the number of employees in
the company. This value should be returned as an int. (The function accepts no
arguments.)

. A function called by main that accepts one argument: the number of
employees in the company. The function should ask the user to enter the number
of days each employee missed during the past year. The total of these days
should be returned as an int.

. A function called by main that takes two arguments: the number of
employees in the company and the total number of days absent for all
employees during the year. The function should return, as a double, the average
number of days absent. (This function does not perform screen output and does
not ask the user for input.)

Input Validation: Do not accept a number less than 1 for the number of
employees. Do not accept a negative number for the days any employee missed.
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//function prototyping
int employeeCount();
int daysMissed(int);
double averageDaysMissed(int,int);

int main()
{
    //define receiving variables
    int numEmployees=0,totalDaysMissed=0;
    //get the needed information from the user
    numEmployees=employeeCount();
    totalDaysMissed=daysMissed(numEmployees);
    //display the average days missed
    cout<<setprecision(2)<<fixed;
    cout<<"For "<<numEmployees<<" the average of days missed is "
        <<averageDaysMissed(numEmployees,totalDaysMissed)<<endl;
    
    return 0;
}

int employeeCount()
{
    //ask the user for the number of employees in the company.
    int count=0;
    cout<<"what is the total number of employees: ";
    cin>>count;
    while (count<1)
    {
        cout<<"The number of employees can not be less that 1.\n";
        cout<<"what is the total number of employees: ";
        cin>>count;
    }
    return count;
}

int daysMissed(int count)
{
    /*
    ask the user to enter the number of days each employee missed during the
     past year
    */
    int total=0,days;
    for (int x=1;x<=count;x++)
    {
        days=-1;
        cout<<"How many days did employee "<<x<<" miss: ";
        cin>>days;
        while (days<0)
        {
            cout<<"Number of days missed can not be less than 0.\n";
            cout<<"How many days did employee "<<x<<" miss: ";
            cin>>days;
        }
        total+=days;
    }
    return total;
}

double averageDaysMissed(int employees, int total)
{
    //calculate the average number of days absent.
    return static_cast<double>(total)/employees;
}
