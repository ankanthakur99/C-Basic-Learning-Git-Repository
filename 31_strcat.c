#include<stdio.h>
#include<string.h>
int main(){
    char *st="this ";
    char st2[45]="Ankan";
    strcat(st2,st);
    
    printf("Now the st2 is %s",st2);
    return 0;
}