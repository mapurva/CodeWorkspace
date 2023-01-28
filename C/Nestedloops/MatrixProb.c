#include <Stdio.h>
int main()
{
    int m, n, a;
    int rowindex = 0, colindex = 0;
    int colsum, rowsum;
    int rowsumsq = 0;
    scanf("%d %d", &m, &n);
    printf("%d %d %d", m, n, rowindex);
    while (rowindex < m)
    {
        rowsum = 0;
        colindex = 0;
        while (colindex < n)
        {
            scanf("%d", &a);
            rowsum += a;
            colindex += 1;
        }
        rowsumsq = rowsum * rowsum;
        colsum += rowsumsq;
        rowindex += 1;
    }
    printf("%d", rowsumsq);
    return 0;
}