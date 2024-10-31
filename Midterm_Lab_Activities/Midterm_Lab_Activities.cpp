/******************************************************************************
Question 1:

Toll roads have different fees at different times of the day and on weekends.
 Write a function CalcToll() that has three arguments: the current hour of
  time (int), whether the time is morning (bool), and whether the day is a
   weekend (bool). The function returns the correct toll fee (double), based on
    the chart below.

Weekday Tolls:
Before 7:00 am ($6.15)
7:00 am to 9:59 am ($7.95)
10:00 am to 2:59 pm ($6.90)
3:00 pm to 7:59 pm ($8.95)
Starting 8:00 pm ($6.40)

Weekend Tolls:
Before 7:00 am ($6.05)
7:00 am to 7:59 pm ($7.15)
Starting 8:00 pm ($6.10)

Question 2:

Hint: Use multiple if's

Write a function CountEvens() that has five integer parameters, and returns the
 count of parameters where the value is an even number
  (i.e. evenly divisible by 2).

Ex: If the five parameters are:

1 22 11 40 37

then the returned count will be:

2
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

double CalcToll(int,bool,bool);
int CountEvens(int,int,int,int,int);

int main()
{
    // Data for testing.
    int timeHour[5]  ={    8,    1,    3,    5,    9};
    bool isMorning[5]={ true,false,false, true,false};
    bool isWeekend[5]={false,false, true, true,false};
    int evenTests[5][5]={1,22,11,40,37,
                         2,13, 6,55,32,
                         3,44,33,20,15,
                         4,26,18,42,88,
                         1, 5, 7, 9,11};
    //run tests for Question 1 CalcToll() function.
    cout<<"\n";
    cout<<"Testing Question 1: CalcToll() function.\n"
        <<"----------------------------------------\n";
    for (int i=0;i<5;i++)
    {
        cout<<"CalcToll("<<timeHour[i]<<", "
            <<(isMorning[i] ? "true" : "false")<<", "
            <<(isWeekend[i] ? "true" : "false")<<") returns "
            <<setprecision(2)<<fixed
            <<CalcToll(timeHour[i],isMorning[i],isWeekend[i])<<endl;
    }
    //run tests for Question 2: CountEvens() function.
    cout<<"\n";
    cout<<"Testing Question 2: CountEvens() function.\n"
        <<"------------------------------------------\n";
    for (int i=0;i<5;i++)
    {
        cout<<"CountEvens("<<evenTests[i][0]<<","<<evenTests[i][1]<<","
            <<evenTests[i][2]<<","<<evenTests[i][3]<<","<<evenTests[i][4]
            <<") has a total of "
            <<CountEvens(evenTests[i][0],evenTests[i][1],evenTests[i][2],evenTests[i][3],evenTests[i][4])
            <<" even numbers.\n";
    }
    return 0;
}

double CalcToll(int hour, bool morning, bool weekend)
{
    double tollFee=0.0;
    if (morning)
    {
        if(!weekend)
        {
            if (hour<7)
            {
                tollFee=6.15;
            }
            else if (hour<10)
            {
                tollFee=7.95;
            }
            else
            {
                tollFee=6.90;
            }
        }
        if(weekend)
        {
            if (hour<7)
            {
                tollFee=6.05;
            }
            else
            {
                tollFee=7.15;
            }
        }
    }
    if (!morning)
    {
        if(!weekend)
        {
            if (hour<3)
            {
                tollFee=6.90;
            }
            else if (hour<8)
            {
                tollFee=8.95;
            }
            else
            {
                tollFee=6.40;
            }
        }
        if(weekend)
        {
            if (hour<8)
            {
                tollFee=7.15;
            }
            else
            {
                tollFee=6.10;
            }
        }
    }
    return tollFee;
}

int CountEvens(int num1, int num2, int num3, int num4, int num5)
{
    int totalEven=0;
    if (num1%2==0)
        totalEven++;
    if (num2%2==0)
        totalEven++;
    if (num3%2==0)
        totalEven++;
    if (num4%2==0)
        totalEven++;
    if (num5%2==0)
        totalEven++;
    
    return totalEven;
}
