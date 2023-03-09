// file 9
// Pointers and 2-D arrays
#include <Stdio.h>
int main()
{
    int b[2][3] = {{1, 2, 3},
                   {4, 5, 6}}; // 2 1-D arrays of 3 int each
    // int* p = b; //compilation error
    int(*p)[3] = b;
    printf("%d \n", b[0]);
    printf("%d \n", b);
    printf("%d \n", b + 1);
    printf("%d \n", *(b + 1));
    printf("%d \n", *(*(b + 1)));
    printf("%d \n", *(b + 1) + 2);
    printf("%d \n", *(*(b + 1) + 2));
    printf("%d \n", *(*b + 1));
    // b[i][j] = *(b[i]+j) = *(*(b+i)+j)
}