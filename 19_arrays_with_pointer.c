#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    //ptr = &marks[0];
    ptr =marks;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value marks for %d student\n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf(" the value marks for %d student is %d\n",i+1,marks[i]);
        
    }
    return 0;
}