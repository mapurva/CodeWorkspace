// file 5
#include <stdio.h>
// call by value
void increment(int a)
{
    a = a + 1;
    printf("Address of a in increment fun %d \n", &a);
}
void incrementR(int *a)
{
    *a = *a + 1;
    printf("Address of a in incrementR fun %d \n", &a);
}
int main()
{
    int a = 10;
    // call by value
    increment(a);
    printf("Address of a in main fun %d \n", &a);
    printf("a = %d\n", a);
    // call by reference
    incrementR(&a);
    printf("Address of a in main fun %d \n", &a);
    printf("a = %d\n", a);
}