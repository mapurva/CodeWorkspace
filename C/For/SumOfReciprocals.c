#include <Stdio.h>
int main()
{
    int i;
    float sum = 0;
    for (i = 1; i <= 100; i++)
    {
        sum += (1.00 / i);
    }
    printf("%f", sum);

    return 0;
}