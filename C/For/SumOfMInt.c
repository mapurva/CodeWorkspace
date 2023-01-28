#include <stdio.h>
int main()
{
    int m;
    int sum = 0;
    int n;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &n);
        sum += n;
    }
    printf("%d\n", sum);
    return 0;
}