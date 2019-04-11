#pragma once
#include <iostream>
#include<fstream>
using namespace std;

//класс Reservoir(водоем)
//	Проверка на равенство площади водной поверхности(операция == )
//	Увеличение и уменьшение объема резервуара на переделенное число(операции +=, -=)
//	Сравнение двух резервуаров по площади водной поверхности(операция > )

class Reservoir {
	double a;
	double b;
public:
	Reservoir() :a(0), b(0) {}
	Reservoir(double a);
	Reservoir(double a, double b);
	double area();

	void setA(double a);
	void setB(double b);
	double getA();
	double getB();
	void print();

	bool operator==(Reservoir obj);
	bool operator>(Reservoir obj);
	bool operator<(Reservoir obj);
	Reservoir operator+=(double n);
	Reservoir operator-=(double n);
};