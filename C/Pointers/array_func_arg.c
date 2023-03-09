// file 7
// Arrays as function arguments

// works fine
//  int SumOfElements(int A[], int size)
//  {
//      int i, sum = 0;
//      for (i = 0; i < size; i++)
//      {
//          sum += A[i];
//      }
//      return sum;
//  }
//  int main()
//  {
//      int A[] = {1, 2, 3, 4, 5};
//      int size = sizeof(A) / sizeof(A[0]);
//      int total = SumOfElements(A, size);
//      printf("Sum of elements= %d\n", total);
//  }
// // Does not work
// #include <stdio.h>
// int SumOfElements(int *A)
// {
//     int i, sum = 0;
//     int size = sizeof(A) / sizeof(A[0]);
//     printf("SOE - Size of A=%d and A[0]=%d \n", sizeof(A), sizeof(A[0]));
//     for (i = 0; i < size; i++)
//     {
//         sum += A[i];
//     }
//     return sum;
// }
// int main()
// {
//     int A[] = {1, 2, 3, 4, 5};
//     int total = SumOfElements(A); // A is passed as ref as it is an array
//     printf("Sum of elements= %d\n", total);
//     printf("main - Size of A=%d and A[0]=%d \n", sizeof(A), sizeof(A[0]));
//     return 0;
// }
// Does work
#include <stdio.h>
int SumOfElements(int *A, int size)
{
    int i, sum = 0;
    printf("SOE - Size of A=%d and A[0]=%d \n", sizeof(A), sizeof(A[0]));
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
void Double(int *A, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = SumOfElements(A, size); // A is passed as ref as it is an array
    printf("Sum of elements= %d\n", total);
    printf("main - Size of A=%d and A[0]=%d \n", sizeof(A), sizeof(A[0]));
    Double(A, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", A[i]);
    }

    return 0;
}