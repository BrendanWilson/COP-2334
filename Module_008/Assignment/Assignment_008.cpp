/******************************************************************************
Write a program that lets the user enter a charge account number. The program
 should determine if the number is valid by checking for it in the following
 list:

    5658845    4520125    7895122    8777541    8451277    1302850
    8080152    4562555    5552012    5050552    7825877    1250255
    1005231    6545231    3852085    7576651    7881200    4581002

The list of numbers above should be initialized in a single-dimensional array.
 A simple linear search should be used to locate the number entered by the user.
 If the user enters a number that is in the array, the program should display a
 message saying the number is valid. If the user enters a number that is not in
 the array, the program should display a message indicating the number is
 invalid.
******************************************************************************/
#include <iostream>

using namespace std;

//listing of functions
int linearSearch(const int arr[], int size, int value)
{
    //search the given array to see if what is being looked for is there.
    int index = 0;
    int position = -1;
    bool found = false;
    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
return position;
}

int getIntegerInput(string prompt)
{
    // function to get integer input with a configurable prompt.
    int value=-1;
    cout<<prompt;
    cin>>value;
    while (value<0)
    {
        cout<<"Please enter a valid number.";
        cout<<prompt;
        cin>>value;
    }
    return value;
}

//Main Loop
int main()
{
    //Set up needed variables and arrays that are needed.
    const int ARRAY_SIZE=18;
    int goodAccounts[ARRAY_SIZE]={5658845,4520125,7895122,8777541,8451277,
                                  1302850,8080152,4562555,5552012,5050552,
                                  7825877,1250255,1005231,6545231,3852085,
                                  7576651,7881200,4581002};
    int accountNumber=0;
    char checkAccount='y';
    //Check an account number and then see if there is another one to check.
    while (tolower(checkAccount) =='y')
    {
        //Get the account number.
        accountNumber=getIntegerInput("Please enter account number: ");
        //Check if it is a good account and tell the user.
        if (linearSearch(goodAccounts,ARRAY_SIZE,accountNumber)>0)
        {
            cout<<accountNumber<<" is useable.\n";
        }
        else
        {
            cout<<accountNumber<<"is not useable.\n";
        }
        //Find out if the user wants to check another account.
        cout<<"Would you like to check another account? (y/n)\n";
        cin>>checkAccount;
    }    
    return 0;
}
