#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];

};


int main(){
    struct employee e1;
    e1.code=100;
    e1.salary=117000.22;
    strcpy(e1.name,"Ankan");
    printf("%d\n",e1.code);
    printf("%s",e1.name);
    return 0;
}