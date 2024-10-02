/******************************************************************************
Goal: Use files to retrieve data.

Assignment: Imagine you're a junior meteorologist tasked with analyzing historical weather
 data. You have a file named "WeatherData.txt", containing a list of daily average temperatures
 (in Celsius) for a year. Your job is to create a program that processes this file to provide insights
 into the temperature trends.

Assume that the file accounts for 30 readings a month, for a total of 360 readings. You need to
 collect the following statistics from the weather data:

The yearly average temperature
The monthly average temperature
The hottest day
The coldest day
For each month, the number of days in which the temperature was 5 degrees higher or lower
 compared to the previous day (known as temperature swings)
Sample Output

Month 01
--------
Average temperature: 9.21
Number of temperature swings: 5

Month 02
--------
Average temperature:  9.13
Number of temperature swings: 7


Average yearly temperature: 15.3
Day 182 was the hottest, with a temperature of 31.3 degrees Celsius.
Day 359 was the coldest, with a temperature of -2.62 degrees Celsius.

Note: For this exercise, you will need to write a Complete C++ program,
 comprehensive of a main function, the inclusion of any libraries needed, etc.
 When outputting floating point values, use setprecision(4), for which you will
 need the iomanip library.
******************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    int dayOfMonth,dayOfYear,monthOfYear,hottestDay,coldestDay,swings;
    double lowestTemperature=300.0,highestTemperature=0.0,temperatureRead,
            totalMonthlyTemperature,totalYearlyTemperature,oldTemp;
    ifstream infile;
    infile.open("WeatherData.txt");
    dayOfYear=0;
    totalYearlyTemperature=00.00;
    for (monthOfYear=1; monthOfYear<=12;monthOfYear++)
    {
        cout<<"Month "<<setw(2)<<setfill('0')<<monthOfYear<<"\n--------\n"<<setfill(' ');
        totalMonthlyTemperature=0.0;
        oldTemp=0.0;
        swings=0;
        for(dayOfMonth=1;dayOfMonth<=30;dayOfMonth++)
        {
            dayOfYear++;
            infile>>temperatureRead;
            totalMonthlyTemperature+=temperatureRead;
            totalYearlyTemperature+=temperatureRead;
            if(oldTemp=0.0)
            {
                oldTemp=temperatureRead;
            }
            else if (temperatureRead>(oldTemp+5)||temperatureRead<(oldTemp-5))
            {
                swings++;
            }
            if(temperatureRead>highestTemperature)
            {
                highestTemperature=temperatureRead;
                hottestDay=dayOfYear;
            }
            if(temperatureRead<lowestTemperature)
            {
                lowestTemperature=temperatureRead;
                coldestDay=dayOfYear;
            }
        }
        cout<<"Average temperature: "<<setprecision(4)<<(totalMonthlyTemperature/30)<<endl;
        cout<<"Number of temperature swings: "<<swings<<endl;
    }
    cout<<"Average temperature: "<<setprecision(4)<<(totalYearlyTemperature/360)<<endl;
    cout<<"Day "<<hottestDay<<" was the hottest, with a temperature of "<<setprecision(4)
        <<highestTemperature<<" degrees Celsius.\n";
    cout<<"Day "<<coldestDay<<" was the coldest, with a temperature of "<<setprecision(4)
        <<lowestTemperature<<" degrees Celsius.\n";
    return 0;
}
