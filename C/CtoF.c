#include <stdio.h>
int main()
{
    float c; // centigrade
    float f; // fahrenheit
    c = 40;
    f = ((9 * c) / 5) + 32; // C to F convert

    printf("The temperature %f Celsius ", c);
    printf("quals %f Fahrenheit.", f);
}