// file 8
// character arrays and pointers
#include <Stdio.h>
#include <string.h>
void print(char *ptr)
{
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
}
int main()
{
    char c[4];
    c[0] = 'j';
    c[1] = 'a';
    c[2] = 's';
    c[3] = 'h';
    printf("%s \n", c); // undefined behaviour if string.h is not used

    char b[5];
    b[0] = 'j';
    b[1] = 'a';
    b[2] = 's';
    b[3] = 'h';
    b[4] = '\0';
    printf("%s \n", b); // defined behaviour

    char a[] = "jash"; // use of string literals
    int len = strlen(a);
    printf("%d \n", len);

    char *d = "jash"; // now string cannot be modified - as stroed in text segment
    print(d);
}