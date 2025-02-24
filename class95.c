#include <stdio.h>
int main()
{

    char ch;
    printf("Enter Your Operation! ( +, _, *, / ) ");
    scanf("%c", &ch);

    switch (ch)
    {
    case '+':
    {
        double num, num1, sum;
        printf("Enter Your Number: ");
        scanf("%lf", &num);
        for (int i = 0; i < num; i++)
        {
            scanf("%lf", &num1);
            sum = sum + num1;
        }
        printf("Sum = %lf", sum);

        break;
    }
    case '-':
    {
        double num, num1, sum;
        printf("Enter Your Number: ");
        scanf("%lf", &num);
        for (int i = 0; i < num; i++)
        {
            scanf("%lf", &num1);
            sum = sum - num1;
        }
        printf("Sum = %lf", sum);

        break;
    }

    default:
        break;
    }

    return 0;
}