// Introduction to pointers in C/C++
// https://www.youtube.com/@mycodeschool/playlists
#include <stdio.h>
int main()
{
    int a;
    a = 5;
    int *p;
    p = &a;
    printf("%d \n", a);
    printf("%d \n", p);
    return 0;
}