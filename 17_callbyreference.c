#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b); //call by reference 

int main()
{
    int a = 3, b = 4;
    printf("The value of a and b is %d and %d\n", a, b);
    //wrong_swap(a,b); // will not work due to call by value
    swap(&a, &b);
    printf("The value of after swap a and b is %d and %d\n", a, b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    
    temp=a;
    a=b;
    b=temp;

}
void swap(int *a, int *b)
{
    int temp;
    
    temp= *a;
    *a=*b;
    *b=temp;

}