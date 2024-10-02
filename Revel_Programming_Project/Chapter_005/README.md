# Revel Programming Project Chapter 5

## Screenshot

[alt_text]<screenshot.png>

### Instructions

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
Average temperature: 9.21
Number of temperature swings: 5

Month 02
Average temperature:  9.13
Number of temperature swings: 7

Month 03
Average temperature: 12.4
Number of temperature swings: 12

Month 04
Average temperature: 15.9
Number of temperature swings: 12

Month 05
Average temperature: 18.2
Number of temperature swings: 2

Month 06
Average temperature: 21.4
Number of temperature swings: 0

Month 07
Average temperature: 24.4
Number of temperature swings: 8

Month 08
Average temperature: 25.2
Number of temperature swings: 11

Month 09
Average temperature: 23.0
Number of temperature swings: 1

Month 10
Average temperature: 14.7
Number of temperature swings: 16

Month 11
Average temperature: 10.2
Number of temperature swings: 2

Month 12
Average temperature: 2.51
Number of temperature swings: 6

Average yearly temperature: 15.3
Day 182 was the hottest, with a temperature of 31.3 degrees Celsius.
Day 359 was the coldest, with a temperature of -2.62 degrees Celsius.
Note: For this exercise, you will need to write a Complete C++ program,
 comprehensive of a main function, the inclusion of any libraries needed, etc.
 When outputting floating point values, use setprecision(4), for which you will
 need the iomanip library.
