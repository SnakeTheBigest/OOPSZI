using namespace std;
#include <iostream>
#include "head.h"
//Переопределение операций числа типа complex
//Сложение
Complex pow1(Complex z1, Complex z2)
{
	Complex h = z1;
	for (int i = 1; i < (double)z2; i++)
	{
		h = h * z1;
	}
	return h;
}
double sh(Complex z)
{
	return (exp((double)z) - exp(-(double)z)) / 2;
}
double ch(Complex z)
{
	return (exp((double)z) + exp(-(double)z)) / 2;
}
double th(Complex z1)
{
	return sh(z1) / ch(z1);
}

ostream &operator<<(ostream &stream, const Complex &instance)
{
	if (instance.Im >= 0)
	{
		stream << instance.Re << " + " << instance.Im << "i";
	}
	else
	{
		stream << instance.Re << " " << instance.Im << "i";
	}
	return stream;

}
Complex Complex::operator+(Complex &b)
{
	Complex c;
	c.Re = Re + b.Re;
	c.Im = Im + b.Im;
	return c;
}
//Вычитание
Complex Complex::operator-(Complex &b)
{
	Complex c;
	c.Re = Re - b.Re;
	c.Im = Im - b.Im;
	return c;
}
//Умножение
Complex Complex::operator*(Complex &b)
{
	Complex c;
	c.Re = Re * b.Re - Im * b.Im;
	c.Im = Im * b.Re + Re * b.Im;
	return c;
}
//Деление
Complex Complex::operator/(Complex &b)
{
	Complex c;
	c.Re = (Re*b.Re + Im * b.Im) / (b.Re*b.Re + b.Im*b.Im);
	c.Im = (Im*b.Re + Re * b.Im) / (b.Re*b.Re + b.Im*b.Im);
	return c;
}

