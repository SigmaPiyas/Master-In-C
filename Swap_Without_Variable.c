#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 1st Number=", a);
    scanf("%d", &a);
    printf("Enter 2nd Number=", b);
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The 1st Number is=%d\n", a);
    printf("The 2nd Number is=%d\n", b);

    return 0;
}