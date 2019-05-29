#include "head.h"
Complex y(Complex &z)
{
	Complex z1 = Complex(1, 0);
	Complex z2 = pow1(z, Complex(5, 0));
	Complex z3 = Complex(th(z) / 2, 0);
	Complex z4 = z1 + z2 + z3;
	return z4;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b;
	cout << "\nВведите реальную часть компексного числа, потом комплексную\n";
	cin >> a >> b;
	Complex h(a, b);
	cout << "\nРезультат работы функции y(z)=1-Z^5-th(z/2)\n";
	cout << y(h)<<"\n";
	system("pause");
	return 0;
}
