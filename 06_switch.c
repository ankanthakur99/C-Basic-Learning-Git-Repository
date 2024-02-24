#include <stdio.h>
int main()
{
    int raiting;
    printf("Enter Your Raiting\n");
    scanf("%d", &raiting);
    switch (raiting)
    {
    case 1:
        printf("Your Raiting is 1\n");
        break;
    case 2:
        printf("Your Raiting is 2\n");
        break;
    case 3:
        printf("Your Raiting is 3\n");
        break;

    case 4:
        printf("Your Raiting is 4\n");
        break;

    case 5:
        printf("Your Raiting is 5\n");
        break;
    case 6:
        printf("Your Raiting is invalid\n");
        break;
    }
    return 0;
}