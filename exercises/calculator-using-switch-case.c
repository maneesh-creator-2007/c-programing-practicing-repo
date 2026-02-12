#include<stdio.h>
int main(){
    int a,b,op,result;
    printf("enter the value in the formate (num1 operator num2) :");
    scanf("%d%c%d",&a,&op,&b);
    switch(op){
    case'+':
        printf("the addition of two numbers is %d",a+b);
        break;
    
    case'-':
        printf("the sub of two numbers is %d",a-b);
        break;

    case'*':
        printf("the mul of two numbers is %d",a*b);
        break;
    
    case'/':
        if(b==0){
            printf("enter a valid b value");
        }
        else{
        printf("the div of two numbers is %d",a/b);
            break;
        }
        

    case'%':
        printf("the modlo of two numbers is %d",a%b);
        break;

    default:
        printf("enter a valid operator");
        break;
    }
    
    return 0;
}