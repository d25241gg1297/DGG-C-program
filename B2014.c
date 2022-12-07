#include <stdio.h>

int main()
{
    const double P = 3.14159;
    double  r, d, perimeter, area;
    scanf_s("%lf", &r);
    d = 2 * r;
    perimeter = d *P;
    area = r * r * P;
    printf("%.4lf %.4lf %.4lf\n", d, perimeter, area);
    return 0;
}