
//#include <iostream>
//#include "Calc.h"
//using namespace std;
//int main()
//{
//	double a = 2.25;
//	taskA(1.2, 2.7, 0.3, a);
//	double m[5] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
//	cout << endl;
//	taskB(m, sizeof(m), a);
//	return 0;
// 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int** p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			p[i][j] = 1;
		}

	}
	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++) {
			p[i][j] = 0;
		}

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				p[i][j] = 1;
			}

		}
	}

	string s;
	s = "$";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[i][j] == 1) {
				cout << s << " ";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	delete[]p;
	return 0;
}



