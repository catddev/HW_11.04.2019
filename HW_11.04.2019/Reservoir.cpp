#include "Reservoir.h"

Reservoir::Reservoir(double a)
{
	this->a = this->b = a;
}

Reservoir::Reservoir(double a, double b) {
	this->a = a;
	this->b = b;
}

double Reservoir::area()
{
	return a * b;
}

void Reservoir::setA(double a)
{
	this->a = a;
}

void Reservoir::setB(double b)
{
	this->b = b;
}

double Reservoir::getA()
{
	return a;
}

double Reservoir::getB()
{
	return b;
}

void Reservoir::print()
{
	cout << a << " " << b << endl;
}

bool Reservoir::operator==(Reservoir obj)
{
	return (area() == obj.area());
}

bool Reservoir::operator>(Reservoir obj)
{
	if (area() > obj.area())
		return true;
	else
		return false;
}

bool Reservoir::operator<(Reservoir obj)
{
	if (area() < obj.area())
		return true;
	else
		return false;
}

Reservoir Reservoir::operator+=(double n)
{
	this->a += n;
	this->b += n;
	return *this;
}

Reservoir Reservoir::operator-=(double n)
{
	this->a -= n;
	this->b -= n;
	return *this;
}