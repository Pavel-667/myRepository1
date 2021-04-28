#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, p;
	double s;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	p = (a + b + c) / 2;

	s = p * (p - a)*(p - b)*(p - c);
	s = sqrt(s);

	cout << "s = " << s;


}

