#pragma once
#include <iostream>
using namespace std;
template < typename ALL_DATA >
class Base_class
{
public:
	virtual int GetSize() = 0;
	virtual ALL_DATA Pop()=0;
	virtual void Push(ALL_DATA d)=0;
	virtual ALL_DATA Peek()=0;
};

template < typename ALL_DATA >
class Ochered_na_osnove_massiva_abs:public Base_class<ALL_DATA>
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
	int GetSize() override
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
	void Push(ALL_DATA d) override
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
	ALL_DATA Pop() override
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
	ALL_DATA Peek() override
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




template < typename ALL_DATA >
class Ciklicheskaya_och :public Base_class<ALL_DATA>
{
	ALL_DATA field;
	Ciklicheskaya_och *next;
	Ciklicheskaya_och *prev;

public:
	Ciklicheskaya_och(ALL_DATA a)
	{
		field = a;
	}
	class Ciklicheskaya_och * init(ALL_DATA a)  // а- значение первого узла
	{
		class Ciklicheskaya_och *lst;
		// выделение памяти под корень списка
		lst = (class Ciklicheskaya_och*)malloc(sizeof(class Ciklicheskaya_och));
		lst->field = a;
		lst->next = lst; // указатель на следующий узел
		lst->prev = lst; // указатель на предыдущий узел
		return(lst);
	}
	int GetSize() override
	{
		int length=0;
		class Ciklicheskaya_och *p;
		p = prev;
		do {
			length++;
		} while (p != prev); // условие окончания обхода
		return length;
	}
	ALL_DATA Pop() override
	{
		return field;
	}
	void Push(ALL_DATA d)override
	{
		
	}
	ALL_DATA Peek() override
	{
		return field;
	}


	class Ciklicheskaya_och * Push1(Ciklicheskaya_och *lst, ALL_DATA number)
	{
		class Ciklicheskaya_och *temp, *p;
		temp = (class Ciklicheskaya_och*)malloc(sizeof(Ciklicheskaya_och));
		p = lst->next; // сохранение указателя на следующий узел
		lst->next = temp; // предыдущий узел указывает на создаваемый
		temp->field = number; // сохранение поля данных добавляемого узла
		temp->next = p; // созданный узел указывает на следующий узел
		temp->prev = lst; // созданный узел указывает на предыдущий узел
		p->prev = temp;
		return(temp);
	}
	class Ciklicheskaya_och * Pop1(Ciklicheskaya_och *lst)
	{
		class Ciklicheskaya_och *prev, *next;
		prev = lst->prev; // узел, предшествующий lst
		next = lst->next; // узел, следующий за lst
		prev->next = lst->next; // переставляем указатель
		next->prev = lst->prev; // переставляем указатель
		free(lst); // освобождаем память удаляемого элемента
		return(prev);
	}
	void rec(Ciklicheskaya_och *lst)
	{
		class Ciklicheskaya_och *p;
		p = lst;
		do {
			printf("%d ", p->field); // вывод значения элемента p
			p = p->next; // переход к следующему узлу
		} while (p != lst); // условие окончания обхода
	}
	void cer(Ciklicheskaya_och *lst)
	{
		class Ciklicheskaya_och *p;
		p = lst;
		do {
			p = p->prev;  // переход к предыдущему узлу
			printf("%d ", p->field); // вывод значения элемента p
		} while (p != lst); // условие окончания обхода
	}

};

