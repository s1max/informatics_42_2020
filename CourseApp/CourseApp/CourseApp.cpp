#include <iostream>
#include <math.h>
using namespace std;
double a = 2.25;
double y(double x) {
	double d = pow(a, (x * x - 1)) - log(x * x - 1) + pow((x * x - 1), 1 / 3.0);
	return d;
}

int main()
{
	for (double x = 1.2; x <= 2.7; x += 0.3) {

		cout << y(x) << endl;
	}


	double m[5] = { 1.31,1.39,1.44,1.56,1.92 };
	for (int i = 1; i < 5; i++) {
		cout << y(m[i]) << endl;

	}
	return 0;

}
