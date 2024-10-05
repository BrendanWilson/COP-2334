/******************************************************************************
Hotel Occupancy

Write a program that calculates the occupancy rate for a hotel. The program
should start by asking the user how many floors the hotel has. A loop should
then iterate once for each floor. In each iteration, the loop should ask the user
for the number of rooms on the floor and how many of them are occupied. After
all the iterations, the program should display how many rooms the hotel has,
how many of them are occupied, how many are unoccupied, and the percentage
of rooms that are occupied. The percentage may be calculated by dividing the
number of rooms occupied by the number of rooms.
******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numFloors=0,floorTotalRooms=0,numInUse=0,totalRoomCount=0,totalUsedCount=0,freeRooms=0;
    double percentOccupancy;
    
    //Find out how many floors the hotel has.
    cout<<"How many floors: ";
    cin>>numFloors;
    while (numFloors<1)
    {
        cout<<"Building must have at least one floor and can not be negative.\n";
        cout<<"How many floors: ";
        cin>>numFloors;
    }
    //Get the total number of rooms and the number in use for each floor.
    for(int i=1;i<=numFloors;i++)
    {
        if(i!=13)
        {
            cout<<"How many rooms on floor "<<i<<": ";
            cin>>floorTotalRooms;
            while (floorTotalRooms<1)
            {
                cout<<"Total room count can not be zero or negative.\n";
                cout<<"How many rooms on floor "<<i<<": ";
                cin>>floorTotalRooms;
            }
            cout<<"How many rooms in use on floor "<<i<<": ";
            cin>>numInUse;
            while (numInUse<0||numInUse>floorTotalRooms)
            {
                cout<<"Rooms in use count can not be negative or greater that total room count.\n";
                cout<<"How many rooms in use on floor "<<i<<": ";
                cin>>numInUse;
            }
            //Create a running total of all rooms and ones in use.
            totalRoomCount+=floorTotalRooms;
            totalUsedCount+=numInUse;
        }
    }
    //Calculate the number of free rooms and the occupancy percentage. Then display the information.
    freeRooms=totalRoomCount-totalUsedCount;
    percentOccupancy=(static_cast<double>(totalUsedCount)/totalRoomCount)*100;
    cout<<setprecision(2)<<fixed;
    cout<<"The hotel has a total of "<<totalRoomCount<<" rooms with "
        <<freeRooms<<" rooms available and "<<totalUsedCount<<" in use.\n"
        <<"The occupancy rate is "<<percentOccupancy<<" percent.\n";
    
    return 0;
}
