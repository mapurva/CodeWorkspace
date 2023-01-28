#include <stdio.h>
int main()
{
    int curr, prev, len, maxlen = 0;
    scanf("%d", &prev);
    if (prev != -1)
    {
        len = 1;
        maxlen = 1;
        scanf("%d", &curr);
        while (curr != -1)
        {
            if (prev < curr)
            {
                len += 1;
            }
            else
            {
                if (maxlen < len)
                {
                    maxlen = len;
                }
                len = 1;
            }
            prev = curr;
            scanf("%d", &curr);
        }
        // for last longest sub seq
        if (maxlen < len)
        {
            maxlen = len;
        }
        printf("max len is: %d \n", maxlen);
    }

    return 0;
}