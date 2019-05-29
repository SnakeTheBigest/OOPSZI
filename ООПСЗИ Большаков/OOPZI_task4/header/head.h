#pragma once
#include <iostream>
using namespace std;
class Complex
{
public:
	Complex()
	{
		Re = 0;
		Im = 0;
	}
	Complex(double re, double im)
	{
		Re = re;
		Im = im;
	}
	operator double()
	{
		return R();
	}
	double R()
	{
		return r();
	}
	double Phi()
	{
		return phi();
	}
	double Re, Im;
	Complex operator+(Complex &a);
	Complex operator-(Complex &a);
	Complex operator/(Complex &a);
	Complex operator*(Complex &a);
	friend std::ostream& operator<<(std::ostream &out, const Complex &ex);
private:

	double r()
	{
		return sqrt(Re*Re + Im * Im);
	}
	double phi()
	{
		return tan(Im / Re);
	}
};

extern Complex pow1(Complex, Complex);

extern double sh(Complex);
extern double ch(Complex);
extern double th(Complex);