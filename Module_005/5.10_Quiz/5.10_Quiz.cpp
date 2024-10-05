/******************************************************************************
Goal: Use of nested loops.

Assignment: As part of an ongoing effort to monitor the weather in a valley,
you are tasked with determining the hottest area every week using the three
weather stations available. The stations report daily the average temperature.

Using nested loops, Write a program that reads as input the values produced
by each station. Each station is input at once, day by day. At the end, print
out which station registered the hottest average.

Sample Run

The input is displayed within [ ].

Station 1, Day 1: [12.5]
Station 1, Day 2: [13.0]
Station 1, Day 3: [14.2]
Station 1, Day 4: [15.1]
Station 1, Day 5: [15.6]
Station 1, Day 6: [16.0]
Station 1, Day 7: [17.5]

Station 2, Day 1: [11.5]
Station 2, Day 2: [12.0]
Station 2, Day 3: [13.5]
Station 2, Day 4: [14.5]
Station 2, Day 5: [14.9]
Station 2, Day 6: [15.5]
Station 2, Day 7: [16.2]

Station 3, Day 1: [13.0]
Station 3, Day 2: [13.5]
Station 3, Day 3: [14.0]
Station 3, Day 4: [14.8]
Station 3, Day 5: [15.3]
Station 3, Day 6: [16.1]
Station 3, Day 7: [17.0]

Station 1 has the hottest average temperature.
Note: Assume the string library has already been included. You need to only
write the loop and declare any variable you need. Take good note of the output
format, as you must reproduce it exactly.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int stationNumber,dayNumber,hottestStation=0;
    double inputTemperature,averageTemperature,totalTemperature,highestTemperature=0;
    for (stationNumber=1;stationNumber<=3;stationNumber++)
    {
        totalTemperature=0;
        for (dayNumber=1;dayNumber<=7;dayNumber++)
        {
            cout<<"Station "<<stationNumber<<", Day "<<dayNumber<<": ";
            cin>>inputTemperature;
            totalTemperature+=inputTemperature;
        }
        averageTemperature=totalTemperature/7;
        if(averageTemperature>highestTemperature)
        {
            highestTemperature=averageTemperature;
            hottestStation=stationNumber;
        }
        cout<<endl;
    }
    cout<<"Station "<<hottestStation<<" has the hottest average temperature.\n";
    return 0;
}