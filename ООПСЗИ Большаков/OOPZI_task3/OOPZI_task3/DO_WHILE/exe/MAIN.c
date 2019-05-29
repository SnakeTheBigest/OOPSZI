#include "head.h"
void main(void)
{
	int exit_it = 1;
	double qw,qw2,qw3;
	while (exit_it==1)
	{
		printf("1 = task 1\n2 = task 2\n3 = task 3\n4 = task 4\n5 = task 5\n6 = exit\n INPUT...\n");
		scanf_s("%lf", &qw);
		switch ((int)qw)
		{
			case 1:
			printf("input n... \nINPUT...\n");
			scanf_s("%lf", &qw2);
			printf("f=%lf\n", summ(qw2));
			break;

			case 2:
			printf("input epsilon... \nINPUT...\n");
			scanf_s("%lf", &qw2);
			printf("f=%lf\n", summ2(qw2));
			break;

			case 3:
			printf("input n... \nINPUT...\n");
			scanf_s("%lf", &qw2);
			printf("input k... \nINPUT...\n");
			scanf_s("%lf", &qw3);
			print(qw2, qw3);
			break;

			case 4:
			printf("input epsilon... \nINPUT...\n");
			scanf_s("%lf", &qw2);
			printf("f=%d\n", findFirstElement(qw2));
			break;

			case 5:
			printf("input epsilon... \nINPUT...\n");
			scanf_s("%lf", &qw2);
			printf("f=%d\n", findFirstNegativeElement(qw2));
			break;

		default:
			exit_it = -1;
			break;
		}
	}

}