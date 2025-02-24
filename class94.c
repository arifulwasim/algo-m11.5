#include <stdio.h>
int main()
{

    int choice;
    printf("Temperature Conversation!\n");
    printf("F -> C\n");
    printf("C -> F\n");
    printf("Enter Your Choice Number: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        printf("F -> C\n");
        break;
    }

    case 2:
    {
        printf("C -> F\n");
        break;
    }

    default:
        printf("Not Valid!\n");
        break;
    }

    return 0;
}