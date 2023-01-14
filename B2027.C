#include <stdio.h>
#include <math.h>
#define P 3.14

int main()
{
	int r;
	scanf("%d\n", &r);
	double v;
	v = P * r * r * r * 4 / 3;
	printf("%.5lf", v);


	return 0;
}