#include <stdio.h>
int sum(int a, int b);

int main()
{
    int x = 4;
    int y = 5;
    printf("The vabue of sum of a and b is %d\n", sum(x,y));

    return 0;
}
int sum(int a, int b)
{
    
    return a+b;
}