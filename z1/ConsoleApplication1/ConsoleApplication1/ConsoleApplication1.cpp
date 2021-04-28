#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int c, a, b, d, g, f;
	cin >> c;
	a = c % 10;
	b = c % 100; f = (b - a) / 10;
	d = c % 1000; g = (d - b) / 100;
	c = (c - d) / 1000;

	cout << a << f << g << c << endl;
	return 0;
}