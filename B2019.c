#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;
    scanf_s("%d", &x);
    _Bool n =x;
    x = n;
    printf("%d", x);


    return 0;
}
