// read n, n>=2, read n intergers and print triplets of consecutively positive input integers that are pythagorean, skipping negative int
#include <stdio.h>
int main()
{
    int curr, prev, pprev;
    int n;
    int i;
    int count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &curr);
        if (curr < 0)
        {
            continue;
        }
        if (count == 0)
        {
            pprev = curr;
            count = 1;
        }
        else
        {
            if (count == 1)
            {
                prev = curr;
                count = 2;
            }
            else
            {
                if (pprev * pprev + prev * prev == curr * curr)
                {
                    printf("%d %d %d\n", pprev, prev, curr);
                    pprev = prev;
                    prev = curr;
                }
            }
        }
    }

    return 0;
}