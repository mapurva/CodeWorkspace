// Break exits the loop immediately
// does not go to update expression
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
            break;
    }
    printf("%d\n", i);
    return 0;
}