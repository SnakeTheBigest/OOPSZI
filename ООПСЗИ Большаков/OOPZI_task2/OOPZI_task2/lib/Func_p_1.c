#include <math.h>
//ВАРИАНТ 21. Рисунок 6.
_Bool isInArea(double x, double y)
{
	//Проверка на отсутствие точки в 3 полуплоскости
	if (!((x>0) & (y< 0)))
	{
		if (fabs(x) <= 1 & fabs(y) <= 1)
		{
			//Точка попадает в область
			return 1;
		}

	}
	return 0;
}