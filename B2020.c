#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e;
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int sum1 = a + b + c + d + e;
	b += a / 3;
	e += a / 3;
	a = a / 3;
	a += b / 3;
	c += b / 3;
	b = b / 3;
	b += c / 3;
	d += c / 3;
	c = c / 3;
	c += d / 3;
	e += d / 3;
	d = d / 3;
	d += e / 3;
	a += e / 3;
	e = e / 3;
	int sum2 = a + b + c + d + e;
	printf("%d %d %d %d %d\n%d", a, b, c, d, e, sum1 - sum2);
	return 0;
}