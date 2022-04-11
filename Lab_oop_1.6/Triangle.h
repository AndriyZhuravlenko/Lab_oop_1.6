#pragma once
#include <string >
#include "Triad.h"
#define PI 3.1415926535
class Triangle
{ public:
	class Triad
	{
	private:
		double a, b, c;

	public:
		double geta() const { return a; }
		double getb() const { return b; }
		double getc() const { return c; }
		string toString() const;

		void seta(double a) { this->a = a; }
		void setb(double b) { this->b = b; }
		void setc(double c) { this->c = c; }

		void Init(double a, double b, double c);
		void Display() const;
		void Read();

		double getSuma()const;
	};
private:
	Triad triad;

public:
	Triangle::Triad getTriad() const { return triad; }
	std::string toString() const;
	double getArea()const { return (triad.getb() * triad.getc() * sin(getAngel1())) / 2; }
	double getAngel1()const
	{
	return (acos(((triad.getb() * triad.getb()) + (triad.getc() * triad.getc()) - (triad.geta() * triad.geta())) / (2 * triad.getb() * triad.getc()))) * 180 / PI;
	}
	double getAngel2()const
	{
	return (acos(((triad.geta() * triad.geta()) + (triad.getc() * triad.getc()) - (triad.getb() * triad.getb())) / (2. * triad.geta() * triad.getc()))) * 180 / PI;
	}
	double getAngel3()const
	{
	return (acos(((triad.geta() * triad.geta()) + (triad.getb() * triad.getb()) - (triad.getc() * triad.getc())) / (2. * triad.geta() * triad.getb()))) * 180 / PI;
	}
	bool seta(double a);
	bool setb(double b);
	bool setc(double c);
	void Init(double a, double b, double c);
	void Display() const;
	void Read();
	void Init(Triangle::Triad p) { triad = p; }
};