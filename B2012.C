#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float c;
    c = b * 100;
    printf("%.3f", c / a);
    printf("%%\n");
    return 0;
}