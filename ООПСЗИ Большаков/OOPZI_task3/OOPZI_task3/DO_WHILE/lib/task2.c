#include <math.h>
//double summ2(double eps)
//{
//	double end = 0;
//	int u = 0;
//	for (; fabs(end) <= eps;)
//	{
//		end += u;
//		++u;
//	}
//	return end;
//}
//double summ2(double eps)
//{
//	double end = 0;
//	int u = 0;
//	while (fabs(end) <= eps)
//	{
//		end += u;
//		++u;
//	}
//	return end;
//}
double summ2(double eps)
{
	double end = 0,elem = 0;
	int u = 0;
	do
	{
		elem = pow(-1, u) / ((u + 1)*(u + 2)*(u + 3));
		end += elem;
		++u;
	} while (fabs(elem) >= eps);
	return end;
}