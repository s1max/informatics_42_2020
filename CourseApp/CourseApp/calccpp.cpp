
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double calc(double a, double x)
{
	
	double y = pow(a, (x * x - 1)) - log(x * x - 1) + pow((x * x - 1), 1 / 3.0);
	return y;
}

double calc(double x)
{
	const double a = 2.25;
	return calc(a, x);
}

void taskA(double a,double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = calc(a, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void taskB(double a, double *x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a,x[i]);
		//printf;
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}