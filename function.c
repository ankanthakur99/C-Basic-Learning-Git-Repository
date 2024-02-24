#include<stdio.h>
    void goodmorning();   
    void goodafternoon();   
    void goodnight();                                                                                                                      
int main(){
    goodmorning();
    return 0;
}
void goodmorning(){
    printf("Goodmorning Ankan\n");
    goodafternoon();
}
void goodafternoon(){
    printf("Goodafternoon Ankan\n");
    goodnight();
}
void goodnight(){
    printf("Goodnight Ankan\n");
    
}
