#include <stdio.h>
int main()
{
    char ch;
    printf("enter your charecter = ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Capital");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Small");
    }
    else
    {
        printf("No Letter");
    }

    return 0;
}