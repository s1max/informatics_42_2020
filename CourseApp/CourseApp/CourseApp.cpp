

#include <iostream>
#include <string>
#include "Calc.h"
using namespace std;
class Pistolet {
private:
	int kalibr, model, massa;
public:
	Pistolet(int a_kalibr, int a_model, int a_massa) {
		kalibr = 9;
		model = 1;
		massa = 4;
		get();
		cout << endl;
	}
	Pistolet(int a_kalibr, int a_model, int a_massa) {
		kalibr = a_kalibr;
		model = a_model;
		massa = a_massa;
		get();
		cout << endl;
	}
	void set(int a_kalibr, int a_model, int a_massa) {
		kalibr = a_kalibr;
		model = a_model;
		massa = a_massa;
	}
	
	void get() {
		cout << "Kalibr is" << kalibr << "model is" << model << "massa id" << massa << endl;
	}
};

int main()


{
	Pistolet svd(11, 4, 3);
	svd.set(7, 2, 10);
	svd.get();
	

	
	double a = 2.25;
	taskA(1.2, 2.7, 0.3, a);
	double m[5] = { 1.31, 1.39, 1.44, 1.56, 1.92 };
	cout << endl;
	taskB(m, sizeof(m), a);
	
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




