#include <stdio.h>
int main()
{
    int a, s = 0;
    printf("Enter your numbers you want to sum, enter -1 to end your input");
    scanf("%d", &a);
    while (a != -1)
    {
        s = s + a;
        scanf("%d", &a);
    }
    printf("The sum is: %d", s);
    return 0;
}