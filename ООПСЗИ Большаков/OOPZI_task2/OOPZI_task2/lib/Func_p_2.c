#include <math.h>
double f(double x)
{
	if (x > 3)
	{
		return 1 / (powl(x,3) + 6);
	}
	else
	{
		return powl(x,2) - 3 * x + 9;;
	}

}