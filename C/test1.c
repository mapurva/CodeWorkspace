#include <stdio.h>
int main(void)
{
    int small = 0, l1, l2, i, j;
    scanf("%d", &l1);
    int a[l1];
    for (i = 0; i < l1; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &l2);
    int b[l2];
    for (i = 0; i < l2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < l1; i++)
    {
        small = a[i];
        for (j = 0; j < l2; j++)
        {
            if (small != b[j])
            {
                printf("%d", small);
                return 0;
            }
        }
    }
    printf("%d", 0);
    return 0;
}