#include "Triad.h"
#include <iostream>
using namespace std;

string Triad::toString() const
{
	cout << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	return string();
}

void Triad::Init(double a, double b, double c)
{
	seta(a);
	setb(b);
	setc(c);
}

void Triad::Display() const
{
	cout << toString() << endl;
}

void Triad::Read()
{
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	Init(a, b, c);
}

double Triad::getSuma() const
{
	return a + b + c;
}
