#include<stdio.h>

int main(){
    int A[]={1,2,3,5,6,8,9,410};
    //A[0]=12;
    //A[1]=15;
    //A[2]=25;
    printf("The Size of A is %d\n",sizeof A );
    printf("%d\n",A[2]);
    for ( int i = 0; i < 10; i++)
    {
        printf("%d\n",A[i]);
    }
    


    return 0;
}