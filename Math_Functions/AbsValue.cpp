//Two ways are there to find absolute of a negative number without using the built-in abs() function.

//1. Using Parameterized Macro

#include <iostream>

using namespace std;

#define ABS(N) ((N<0)?(-N):(N))

int main()
{
   int val;
   
   val=-10;
   cout<<"Absolute value of "<<val<<" is "<<ABS(val)<<endl;
   val=10;
   cout<<"Absolute value of "<<val<<" is "<<ABS(val)<<endl;
   
   return 0;
}

//2. Using User Define Function

//This is a user defined function, that will take an integer number and return absolute value.
int ABS(int N)
{
    return ((N<0)?(-N):(N));
}

