#include <stdio.h>

int main()
{
    int n1, n2, min, i, res, max = 0;
    printf("Enter two numbers to find GCD.");
    scanf("%d %d", &n1, &n2);
    min = n1 > n2 ? n2 : n1;
    if (min != 0)
    {
        for (i = min; i >= 1; i--)
        {
            if (n1 % i == 0 && n2 % i == 0)
            {
                res = i;
                break;
            }
        }
        printf("GCD of %d and %d is %d", n1, n2, res);
    }
    else
    {
        max = n1 < n2 ? n2 : n1;
        printf("GCD of %d and %d is %d", n1, n2, max);
    }
    return 0;
}