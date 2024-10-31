# Midterm Lab Activities

2 lab activities for Midterms

## Screenshot

![Screenshot of Midterm Lab](<Screenshot 2024-10-31 131732.png>)

### Instructions

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
Ex: The function calls below, with the given arguments, will return the
 following toll fees:

CalcToll(8, true, false) returns 7.95
CalcToll(1, false, false) returns 6.90
CalcToll(3, false, true) returns 7.15
CalcToll(5, true, true) returns 6.05

Question 2:

Hint: Use multiple if's

Write a function CountEvens() that has five integer parameters, and returns the
 count of parameters where the value is an even number
  (i.e. evenly divisible by 2).

Ex: If the five parameters are:

1 22 11 40 37

then the returned count will be:

2

Hint: Use the modulo operator % to determine if each number is even or odd.

Your program must define the function:

int CountEvens(int num1, int num2, int num3, int num4, int num5)
