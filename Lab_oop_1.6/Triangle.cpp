#include "Triangle.h"
#include <iostream>
using namespace std;

void Triangle::Init(double a, double b, double c)
{
	triad.Init(a, b, c);
}

void Triangle::Display() const
{
	triad.Display();
}

string Triangle::toString() const
{
	stringstream;
	triad.toString();
	return string();
}

bool Triangle::seta(double value)
{
	if (value > 0)
	{
		triad.seta(value);
		return true;
	}
	else
	{
		triad.seta(0);
		return false;
	}
}

bool Triangle::setb(double value)
{
	if (value > 0)
	{
		triad.setb(value);
		return true;
	}
	else
	{
		triad.setb(0);
		return false;
	}
}

bool Triangle::setc(double value)
{
	if (value > 0)
	{
		triad.setc(value);
		return true;
	}
	else
	{
		triad.setc(0);
		return false;
	}
}

void Triangle::Read()
{
	Triangle::Triad triad;
	double a;
	double b;
	double c;
	cout << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	Init(a, b, c);
}

	string Triangle::Triad::toString() const
	{
		stringstream;
		cout << a << "," << b << "," << c;
		return string();
	}

	void Triangle::Triad::Init(double a, double b, double c)
	{
		seta(a);
		setb(b);
		setc(c);
	}

	void Triangle::Triad::Display() const
	{
		cout << toString() << endl;
	}

	void Triangle::Triad::Read()
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

	double Triangle::Triad::getSuma() const
	{
		return a + b + c;
	}