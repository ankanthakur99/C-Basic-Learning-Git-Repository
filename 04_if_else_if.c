#include <stdio.h>

int main()
{
    int num;
    printf("Enter Your Number\n");
    scanf("%d", &num);
    if (num==1)
    {
        printf("Your number is 1\n");
    }
    else if(num==2)
    {
        printf("you number is 2\n");
    }
    else if(num==3)
    {
        printf("you number is 3\n");
    } 
    else
    {
        printf("you number is not 1,2 or 3\n");
    } 

    return 0;
}