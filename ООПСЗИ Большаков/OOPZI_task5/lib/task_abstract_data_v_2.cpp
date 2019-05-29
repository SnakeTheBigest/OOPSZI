// OOPZI_task5.cpp: определяет точку входа для приложения.
//
using namespace std;
#include <iostream>
#include "head.h"


template < typename ALL_DATA >
Ochered_na_osnove_massiva_abs<ALL_DATA> Ochered_na_osnove_massiva_abs<ALL_DATA>::operator=
(Ochered_na_osnove_massiva_abs &drugoi_stack)
{
	/*	Мы должны:
	1) Удалить предыдущий массив.
	2) Создать новый по размерам другого.
	3) Расширить свой размер на размер другого.
	4) Заполнить его данными.
	*/
	if (this == &drugoi_stack)
	{
		return *this;
	}
	delete[] arr;
	arr = new int[length + 1];
	length = drugoi_stack.length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = drugoi_stack.arr[i];
	}
}
template < typename ALL_DATA >
ostream &operator<<(ostream &stream, 
	Ochered_na_osnove_massiva_abs<ALL_DATA> &instance)
{
	for (int i = 0; i < instance.GetSize(); i++)
	{
		stream << i << " " << instance.GetElement(i) << "\n";
	}
	stream <<" 0 " << instance.Peek() << "\n";
	return stream;
}
