#include <math.h>
double summ(int n)
{
	double end = 0;
	for (int i = 0; i < n; i++)
	{
		end += pow(-1,i)/((i+1)*(i+2)*(i+3));
	}
	return end;
}

//double summ(int n)
//{
//	double u = 0, end = 0;
//	int i = 0;
//	while (i < n)
//	{
//		end += u;
//		u += i;
//		i++;
//	}
//	return end;
//}
//
//double summ(int n)
//{
//	double u = 0, end = 0;
//	int i = 0;
//	do
//	{
//		end += u;
//		u += i;
//		i++;
//	} while (i < n);
//	return end;
//}