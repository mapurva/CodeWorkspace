#include <stdio.h>
int main()
{
    int a;
    while (scanf("%d", &a) == 1)
    {
        if (a < 0)
            continue;
        printf("%d", a);
    }

    return 0;
}