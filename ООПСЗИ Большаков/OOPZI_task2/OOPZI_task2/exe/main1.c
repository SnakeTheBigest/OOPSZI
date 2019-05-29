#include "head.h"

void main(void)
{
	double x1,y1;
	
	printf("1 = task 1\n2 = task 2\n INPUT...\n");
	scanf_s("%lf", &x1);
	switch ((int)x1)
	{
	case 1:
		printf("Input X...\n");
		scanf_s("%lf", &x1);
		printf("Input Y...\n");
		scanf_s("%lf", &y1);
		printf("f=%lf\n", (double)isInArea((double) x1, (double)y1));
		getch();
		break;
	case 2:
		printf("Input X...\n");
		scanf_s("%lf", &x1);
		printf("f=%lf\n", f((double)x1));
		getch();
		break;
	default:
		printf("OH, You did it wrong!\n");
		getch();
		break;
	}
}