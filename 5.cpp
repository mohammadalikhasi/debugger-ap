#include<stdio.h>
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60 };
    int *ptr1 = arr;
    printf("%d", *ptr1);
    //it prints 10
    int *ptr2 = arr + 5;
    printf("%d", *ptr2);
    //it prints 60
    printf("%d\n", (*ptr2 - *ptr1));
    //it prints 50
    printf("%c", (char)(*ptr2 - *ptr1));
    // it prints '2' beacause '2'=50
    return 0;
}