#include <math.h>
//void print(int n, int k)
//{
//	double end = 0; int j = 1;
//	for (int i = 0; i < n; i++)
//	{
//		end += i;
//
//		if (i == (k*j))
//		{
//			j++;
//			continue;
//		}
//		printf("%d ",end);
//	}
//	printf("\n");
//}
//void print(int n, int k)
//{
//	double end = 0; int j = 1;
//	int i = 0;
//	while (i<n)
//	{
//		end += i;
//
//		if (i == (k*j))
//		{
//			j++;
//			continue;
//		}
//		printf("%d ", end);
//		i++;
//	}
//	printf("\n");
//}

void print(int n, int k)
{
	double end = 0; int j = 1;
	int i = 0;
	do
	{
		end += pow(-1, i) / ((i + 1)*(i + 2)*(i + 3));

		if (i == (k*j))
		{
			j++;
			i++;
			continue;
		}
		i++;
		printf("%lf ", end);
	} while (i <= n);
	printf("\n");
}