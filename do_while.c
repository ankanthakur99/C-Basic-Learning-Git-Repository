#include <stdio.h>

int main()
{
    int i=0;
    int n;
    printf("Enter the Value of n\n");
    scanf("%d",& n);

    do
    {
        printf("the value of i %d\n",i+1);
        i++;
        } while (i<n);

    return 0;
}