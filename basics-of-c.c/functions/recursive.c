#include <stdio.h>
int factorial(int x);
int main(){
    int n,fact;
    printf("enter the value of n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("the factorial of %d is %d\n",n,fact);
    return 0;
}

int factorial(int x){
    if(x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}