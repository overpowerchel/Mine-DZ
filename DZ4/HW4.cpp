﻿#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Вариант 1
	double a = 4.8, b = -7.9, m, n;
	if (a >= b)n = pow(a - b, 1.0 / 3);
	else n = pow(a, 2) + ((a - b) / sin(a * b));
	if (n < b) m = ((n + a) / -b) + sqrt(pow(sin(a), 2) - cos(n));
	else if (n == b) m = pow(b, 2) + tan(n * a);
	else m = pow(b, 3) + n * pow(a, 2);
	cout << " a = " << a << "\n" << " b = " << b << "\n" << " m = " << m << "\n" << " n = " << n << " ";
}
