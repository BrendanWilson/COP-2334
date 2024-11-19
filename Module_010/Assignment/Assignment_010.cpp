/******************************************************************************
String Length

Write a function that returns an integer and accepts a pointer to a C-string as
an argument. The function should count the number of characters in the string
and return that number. Demonstrate the function in a simple program that asks
the user to input a string, passes it to the function, then displays the
function’s return value.
******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

//Function prototype
int stringLength(char *);

int main()
{
    //Create an array to hold the string that a user inputs.
    const int SIZE = 101; // Array size to set the maximum number of characters.
    char userString[SIZE]; // Array to hold the string
    
    //Get input from the user
    cout << "Enter a string (up to "<<SIZE-1<<" characters): ";
    cin.getline(userString, SIZE);
    
    //Tell the user how many characters they entered.
    cout<<"You entered a string that is "<<stringLength(userString)
        <<" characters long.\n";
    
    return 0;
}

int stringLength(char *strPtr)
{
    return strlen(strPtr);
}
