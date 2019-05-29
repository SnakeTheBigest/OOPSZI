// OOPZI_task5.cpp: определяет точку входа для приложения.
//
using namespace std;
#include <iostream>
#include "head.h"


Ochered_na_osnove_massiva::Ochered_na_osnove_massiva()
{
	arr = new int[0];
	length = 0;
}
Ochered_na_osnove_massiva::~Ochered_na_osnove_massiva()
{
	delete[] arr;
}
int Ochered_na_osnove_massiva::GetSize()
{
	return length;
}
//Вернуть элемент
int Ochered_na_osnove_massiva::GetElement(int n)
{
	if (n < length)
	{
		return arr[n];
	}
	else
	{
		return -1;
	}
}

//Впихнуть новый элемент
void Ochered_na_osnove_massiva::Push(int d)
{
	//У нас есть пустой массив, размерами на 1 больше исходного
	int *a = new int[length + 1];
	//заполняем пустой массив данными, уже существующими
	for (int i = 0; i < length; i++)
	{
		a[i] = arr[i];
	}
	//Заполняем последнюю ячейку данными, которые были получены
	a[length] = d;
	//Здесь потребуется переопределение оператора присваивания
	//Присваиваем нашему постоянному массиву данные не очень постоянного.
	length++;
	arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		arr[i] = a[i];
	}
	//удаляем не очень постоянный
	delete[] a;
}
//Вынуть первый элемент (в соответствии с понятием очереди)
int Ochered_na_osnove_massiva::Pop()
{
	//У нас есть пустой массив, размерами на 1 меньше исходного
	int *a = new int[length - 1];

	//заполняем пустой массив данными, уже существующими, окромя последнего. 
	//Который умирает.
	for (int i = 0; i < length - 1; i++)
	{
		a[i] = arr[i + 1];
	}
	//Присваиваем нашему постоянному массиву данные не очень постоянного.
	length--;
	arr = new int[length];

	for (int i = 0; i < length; i++)
	{
		arr[i] = a[i];
	}
	//удаляем не очень постоянный
	delete[] a;

	if (length != 0)
	{
		return arr[length - 1];
	}
	else
	{
		return -1;
	}
}
int Ochered_na_osnove_massiva::Peek()
{
	//Вернем головной элемент. То есть, arr[0]
	if (length != 0)
	{
		return arr[0];
	}
	else
	{
		return -1;
	}
}
void Ochered_na_osnove_massiva::ret()
{
	for (int i = GetSize() - 1; i > 0; i--)
	{
		cout << i << " " << GetElement(i) << endl;
	}
	cout << " " << Peek() << endl;
}




Ochered_na_osnove_massiva Ochered_na_osnove_massiva::operator=
(Ochered_na_osnove_massiva &drugoi_stack)
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
ostream &operator<<(ostream &stream, Ochered_na_osnove_massiva &instance)
{
	for (int i = 0; i < instance.GetSize(); i++)
	{
		stream << i << " " << instance.GetElement(i) << "\n";
	}
	stream <<" 0 " << instance.Peek() << "\n";
	return stream;
}
