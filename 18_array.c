#include<stdio.h>

int main(){
    int i = 34;
    int *ptr = &i;
    printf("The value of prt  %u\n",ptr);
    ptr++ ; 
    printf("The value of prt  %u\n",ptr);        
    return 0;
}