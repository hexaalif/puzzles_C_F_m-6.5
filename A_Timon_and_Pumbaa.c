#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a - b;
    if (res <= 0)
    {
        printf("0");
    }
    else
    {
        printf("%d", res);
    }
    return 0;
}