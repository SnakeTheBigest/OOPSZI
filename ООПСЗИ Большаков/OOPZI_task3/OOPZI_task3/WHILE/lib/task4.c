#include <math.h>
//int findFirstElement(double eps)
//{
//	double end = 0;
//	int u = 0;
//	for (;;)
//	{
//		end += u;
//		++u;
//		if (fabs(end) <= eps)
//		{
//			break;
//		}
//	}
//	return end;
//}
int findFirstElement(double eps)
{
	double end = 0;
	int u = 0;
	while (1)
	{
		end += pow(-1, u) / ((u + 1)*(u + 2)*(u + 3));
		++u;
		if (fabs(end) <= eps)
		{
			break;
		}
	}
	return u;
}
//int findFirstElement(double eps)
//{
//	double end = 0;
//	int u = 0;
//	do
//	{
//		end += u;
//		++u;
//		if (fabs(end) <= eps)
//		{
//			break;
//		}
//	} while (1);
//	return end;
//}