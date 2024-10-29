/******************************************************************************
Write a program that lets a maker of chips and salsa keep track of sales for
 five different types of salsa: mild, medium, sweet, hot, and zesty. The
 program should use two parallel 5-element arrays: an array of strings that
 holds the five salsa names, and an array of integers that holds the number of
 jars sold during the past month for each salsa type. The salsa names should be
 stored using an initialization list at the time the name array is created. The
 program should prompt the user to enter the number of jars sold for each type.
 Once this sales data has been entered, the program should produce a report
 that displays sales for each salsa type, total sales, and the names of the
 highest selling and lowest selling products.

Input Validation: Do not accept negative values for number of jars sold.
SAMPLE RUN RESULTS
Jars sold last month of mild : 316
Jars sold last month of medium: 841
Jars sold last month of sweet : 183
Jars sold last month of hot : 411
Jars sold last month of zesty : 352
Salsa Sales Report
Name Jars Sold
____________________
mild 316
medium 841
sweet 183
hot 411
zesty 352
Total Sales: 2103
High Seller: medium
Low Seller : sweet
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int getIntegerInput(string prompt, int min=0)
{
    // function to get integer input with a configurable prompt and minimum.
    int value=0;
    cout<<prompt;
    cin>>value;
    while (value<min)
    {
        cout<<"Please enter a valid number.";
        cout<<prompt;
        cin>>value;
    }
    return value;
}

int main()
{
    //declaring arrays
    const int NUM_PRODUCTS=5;
    string salsaType[NUM_PRODUCTS]={"mild","medium","sweet","hot","zesty"};
    int salsaSales[NUM_PRODUCTS];
    int totalSales=0,highestSales=0,lowestSales=0,amountH=0,amountL=0;


    //Get the amount of each type sold
    for (int count=0;count<NUM_PRODUCTS;count++)
    {
        salsaSales[count]=getIntegerInput("Jars sold last month of "
                                        +salsaType[count]+" : ");
    }
    //Tally the sales and find which ones sold the most and least.
    amountH=salsaSales[0];
    amountL=salsaSales[0];
    for (int i=0;i<NUM_PRODUCTS;i++)
    {
        totalSales+=salsaSales[i];
        if (salsaSales[i]>amountH)
        {
            highestSales=i;
        }
        if (salsaSales[i]<amountH)
        {
            lowestSales=i;
        }
    }
    //Print out report.
    cout<<"Salsa Sales Report\n"
        <<"Name     Jars Sold\n"
        <<"__________________\n";
    for (int i=0;i<NUM_PRODUCTS;i++)
    {
        cout<<left<<setw(8)<<salsaType[i]<<right<<setw(10)<<salsaSales[i]<<endl;
    }
    cout<<"Total Sales: "<<totalSales<<endl
        <<"High Seller: "<<salsaType[highestSales]<<endl
        <<"Low Seller : "<<salsaType[lowestSales]<<endl;
    return 0;
}