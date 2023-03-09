// Pointer and arrays
// file 6
// Address &A[i] or (A+i)
// Value A[i] or *(A+i)
#include <Stdio.h>
int main()
{
    int A[] = {2, 4, 5, 8, 1};
    int *p = A;
    // A++;    //invalid
    // p++;    //valid
    // printf("%d \n", A);
    // printf("%d \n", *A);
    // printf("%d \n", &A[0]);
    // printf("%d \n", A[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("Address %d \n", A + i);
        printf("Address %d \n", &A[i]);
        printf("Value %d \n", *(A + i));
        printf("Value %d \n", A[i]);
    }

    return 0;
}