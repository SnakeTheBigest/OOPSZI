#include "head.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "шаблон очереди\n\n\n" << endl;
	Ochered_na_osnove_massiva_abs<double> shabl;
	cout << "!!!!" << endl;
	shabl.Push(0);
	shabl.Push(12.118210);
	shabl.Push(1.8);
	shabl.Push(0);
	shabl.ret();
	cout << "- элемент из очереди" << endl;
	shabl.Pop();
	cout << "+ элемент в очередь" << endl;
	shabl.Push(9);
	shabl.ret();

	system("Pause");

	Ciklicheskaya_och<int> *aaa;
	Ciklicheskaya_och<int> bbb(1);
	aaa = bbb.init(100);
	aaa->Push1(aaa, 23);
	aaa->Push1(aaa, 11);
	aaa->Push1(aaa, 880553535);
	aaa->rec(aaa);
	system("Pause");
	return 0;
}