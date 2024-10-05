/******************************************************************************
Quiz 5.11: Question 7
Goal: Processing data read from multiple files

Assignment:

You have stored your yearly revenue in multiple files corresponding to different months. January’s data in january.txt, February’s in february.txt, and so on. The data for some of the months has gone missing, though.  Write a code snippet that lets the user enter filenames as console input, and calculates the average revenue for the months that have not gone missing. The user will enter "stop" when there are no more files to check. Write the average to the console. If all the data has gone missing, print 0 to the console.
******************************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string fileName;
    int count=0;
    double data=0,average=0,total=0;
    ifstream infile;

    cout<<"Please enter file name: ";
    cin>>fileName;
    while(fileName!="stop")
    {
        infile.open(fileName.c_str());// open 
        if(infile)
        {
            infile>>data;
            total+=data;
            count++;
        }
        else
        {
            cout<<fileName<<" not found.\n";
            cout<<"Please enter file name: ";
            cin>>fileName;
        }
        infile.close();
        cin>>fileName;
    }
    if(total!=0)
    {
        average=total/count;
        cout<<setprecision(2)<<fixed;//make out put to show normal currency pattern.
        cout<<"The average is: "<<average<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}