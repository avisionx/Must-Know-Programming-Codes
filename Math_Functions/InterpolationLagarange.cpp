// InterpolationLagarange.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main()
{
	float n; // num of points
	cout << "please enter the number of points: " << endl;
	cin >> n;

	float *x = new float[100];  // x values of points
	float *y = new float[100]; // f(x) values
	cout << "please enter x y int these format:" << endl;
	for (int i = 0; i < n; i++) // a foor loop to intetcept the input into the array in form of x y
		cin >> x[i] >> y[i];

	float X; // the x we searcing y for
	cout << "please enter the x to calculate y for: " << endl;
	cin >> X;

	float Y; // will hold the resulting y

	Y = 0;
	for (int i = 0; i < n; i++)
	{
		float midMulti =1; // multiplication neutral
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			midMulti  *= (X - x[j]) / (x[i] - x[j]);// the division in the function
		}
		Y += midMulti*y[i];
	}

	cout << "the y value is: " << Y << endl;

    return 0;
}
