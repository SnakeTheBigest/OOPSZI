#pragma once

#include <iostream>
using namespace std;
// TODO: установите здесь ссылки на дополнительные заголовки, требующиеся для программы.

class Ochered_na_osnove_massiva
{
public:
	Ochered_na_osnove_massiva();
	~Ochered_na_osnove_massiva();
	//Вернуть длину
	int GetSize();
	//Вернуть элемент
	int GetElement(int n);

	//Впихнуть новый элемент
	void Push(int d);
	//Вынуть первый элемент (в соответствии с понятием очереди)
	int Pop();
	int Peek();
	void ret();

	Ochered_na_osnove_massiva operator=(Ochered_na_osnove_massiva &a);
	friend std::ostream& operator<<(std::ostream &out, const Ochered_na_osnove_massiva &ex);
private:
	int length;
	int *arr;
};

template < typename ALL_DATA >
class Ochered_na_osnove_massiva_abs
{
public:
	Ochered_na_osnove_massiva_abs()
	{
		arr = new ALL_DATA[0];
		length = 0;
	}
	~Ochered_na_osnove_massiva_abs()
	{
		delete[] arr;
	}
	//Вернуть длину
	int GetSize()
	{
		return length;
	}
	//Вернуть элемент
	ALL_DATA  GetElement(int n)
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
	void Push(ALL_DATA d)
	{
		//У нас есть пустой массив, размерами на 1 больше исходного
		ALL_DATA *a = new ALL_DATA[length + 1];
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
		arr = new ALL_DATA[length];

		for (int i = 0; i < length; i++)
		{
			arr[i] = a[i];
		}
		//удаляем не очень постоянный
		delete[] a;
	}
	//Вынуть первый элемент (в соответствии с понятием очереди)
	ALL_DATA Pop()
	{
		//У нас есть пустой массив, размерами на 1 меньше исходного
		ALL_DATA *a = new ALL_DATA[length - 1];

		//заполняем пустой массив данными, уже существующими, окромя последнего. 
		//Который умирает.
		for (int i = 0; i < length - 1; i++)
		{
			a[i] = arr[i + 1];
		}
		//Присваиваем нашему постоянному массиву данные не очень постоянного.
		length--;
		arr = new ALL_DATA[length];

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
	ALL_DATA Peek()
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
	void ret()
	{
		for (int i = GetSize() - 1; i > 0; i--)
		{
			cout << i << " " << GetElement(i) << endl;
		}
		cout << " " << Peek() << endl;
	}
	Ochered_na_osnove_massiva_abs operator=(Ochered_na_osnove_massiva_abs &a);
	friend std::ostream& operator<<(std::ostream &out, const Ochered_na_osnove_massiva_abs &ex);
private:
	int length;
	ALL_DATA *arr;
};