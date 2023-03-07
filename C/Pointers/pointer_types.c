// file3
#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("size of int is: %d bytes \n", sizeof(int));
    printf("Address: %d, Values: %d \n", p, *p);
    char *p0;
    p0 = (char *)&a;
    printf("size of char is: %d bytes \n", sizeof(char));
    printf("Address: %d, Values: %d \n", p0, *p0);
    printf("Address: %d, Values: %d \n", p0, *p0 + 1);
    printf("Address: %d, Values: %d \n", p0, *(p0 + 1));
    // 1025 00000000 00000000 00000100 00000001

    void *p1;
    p1 = p;
    printf("Address: %d\n", p1);
    // printf("Values: %d \n", *p1); cannot dereference void pointer
    return 0;
}