#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a, b, dob, sum;

	cout << "¬вед≥ть 2 числа" << endl;
	cin >> a >> b;
	sum = a + b;
	dob = a * b;
	cout << endl;

	cout << a << "+" << b << "=" << sum << endl << a << "*" << b << "=" << dob << endl << endl;

	if (sum > dob)
		cout << sum << ">" << dob;
	else if (sum < dob)
		cout << sum << "<" << dob;
	else
		cout << sum << "=" << dob;
	return 0;
}
