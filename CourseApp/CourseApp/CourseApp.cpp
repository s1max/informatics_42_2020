
#include <iostream>
#include "Calc.h"
using namespace std;
int main()
{
	double a = 2.25;
	taskA(1.2, 2.7, 0.3, a);
	double m[5] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
	cout << endl;
	taskB(m, sizeof(m), a);
	return 0;


}
