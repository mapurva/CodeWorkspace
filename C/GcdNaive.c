#include <stdio.h>

int main()
{
    int n1, n2, min, i = 0;
    int res = 1;
    printf("Enter two numbers to find GCD.");
    scanf("%d %d", &n1, &n2);
    min = n1 > n2 ? n2 : n1;
    for (i = min; i > 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            res = i;
            break;
        }
    }
    printf("GCD of %d and %d is %d", n1, n2, res);
    return 0;
}