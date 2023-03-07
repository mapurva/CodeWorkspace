// file2
#include <stdio.h>
int main()
{
    int a;
    a = 1;
    int *p;
    p = &a;
    printf("Address p is %d \n", p);
    printf("size of int is: %d bytes \n", sizeof(int));
    printf("Address p+1 is %d \n", p + 1);
    printf("-----\n");
    printf("value @ p is %d \n", *p);
    printf("value @ p + 1 is %d \n", *p + 1);
    printf("value @ p+1 is %d \n", *(p + 1));

    return 0;
}