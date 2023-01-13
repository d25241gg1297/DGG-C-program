#include <stdio.h>
int main()
{
    char a; int b; float c; double d;
    scanf("%c\n%d\n%f\n%lf\n", &a, &b, &c, &d);
    printf("%c %d %.6f %.6lf", a, b, c, d);


    return 0;
}