// create by dgg on 1/13/2023
#include <stdio.h>
#include <math.h>

int main(void)
{
	int h, r ,v;
	double p = 3.1415926;
	scanf("%d %d", &h, &r);
	v = p * r * r * h;
	int t;
	
	if ((20 * 1000) % v != 0)
		 t = (20 * 1000) / v +1; 
	else
	  t = (20 * 1000) / v;
	printf("%d", t);



	return 0;
}
