#include<stdio.h>
int main()
{
    float arr[5] = { 12.5, 10.0, 13.5, 90.5, 0.5 };
    float *ptr1 = &arr[0];
    printf("%f", *ptr1);
    // it prints 12.500000
    float *ptr2 = ptr1 + 3;
    printf("%f", *ptr2);
    // it prints 90.500000
    printf("%f", *ptr2 - *ptr1);
    // it prints 78.000000
    return 0;
}