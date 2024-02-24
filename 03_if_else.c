#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    if (age<=70 && age>=18)
    {
        printf("%d you can drive\n", age);
    }
    else
    {
        printf("%d you can't drive\n",age);
    }
     

    return 0;
}