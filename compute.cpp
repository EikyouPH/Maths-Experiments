#include "compute.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

compute::compute()
{
	n = 0;
}

void compute::Fibo(int N)
{
	long a = 0;
	long b = 1;
	long s = 0;
	double r = 0.0;

	cout << a << ",i" << endl;
	cout << b << ",i" << endl;

	for (int i = 0; i < N; i++)
	{
		if (a != 0)
		{
			r = double(b) / double(a);
		}
		s = a + b;
		a = b;
		b = s;
		cout << s << "," << r << endl;
	}

	
}
