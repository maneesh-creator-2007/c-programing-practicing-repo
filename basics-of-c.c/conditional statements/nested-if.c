#include <stdio.h>
int main(){
    int a,b;
    printf("enter the age of a person:");
    scanf("%d",&a);
    printf("enter the salary of a person:");
    scanf("%d",&b);
    if(a>20){
        if(b>50000){
            printf("hurry,you are elegible for the loan\n");
        }
        else{
            printf("sorry,you are not elegible for the loan\n");
        }
    }
        else{
            printf("sorry,you are not attain our age criteria\n");
        }
    
    return 0;
}