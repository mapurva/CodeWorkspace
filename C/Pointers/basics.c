// Introduction to pointers in C/C++
// https://www.youtube.com/@mycodeschool/playlists
// file1
#include <stdio.h>
int main()
{
    int a;
    a = 5;
    int *p;
    // printf("%d \n", p);
    // printf("%d \n", *p);
    p = &a;
    printf("%d \n", a);
    printf("%d \n", &a);
    printf("%d \n", p);
    printf("%d \n", &p);
    printf("%d \n", *p);
    *p = 9;
    printf("%d \n", a);
    int b = 10;
    *p = b;
    printf("%d \n", p);
    printf("%d \n", &p);
    printf("%d \n", *p);
    p = &b;
    printf("%d \n", p);
    printf("%d \n", &a);
    printf("%d \n", &b);
    printf("%d \n", &p);
    printf("%d \n", *p);
    return 0;
}