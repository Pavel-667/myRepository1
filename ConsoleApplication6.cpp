#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, n, s;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;
	b = a / 100;
	b = a % 100;

	cout << "n = ";
	cin >> n;

	s = (a + b) * n;
	
}

