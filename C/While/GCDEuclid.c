#include <stdio.h>
int main()
{
    // gcd(a,b)=gcd(b, a%b)
    int a, b, t = 0;
    scanf("%d %d", &a, &b);
    // ensure a is larger
    if (a < b)
    {
        t = a;
        a = b;
        b = t;
    }
    // now a is larger
    printf("GDC of %d and %d is ", a, b);
    while (!(b == 0))
    {
        t = a;
        a = b;
        b = t % b;
    }
    printf("%d\n", a);

    return 0;
}