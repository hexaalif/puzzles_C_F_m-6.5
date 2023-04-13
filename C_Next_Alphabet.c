#include <stdio.h>

int main()
{
    char in;
    scanf("%c", &in);
    if (in != 'z')
    {
        printf("%c", in + 1);
    }
    else
    {
        printf("a");
    }

    return 0;
}