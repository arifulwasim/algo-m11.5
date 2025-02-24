#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter Your Number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("%d Factorial is = %d", n, fact);

    return 0;
}