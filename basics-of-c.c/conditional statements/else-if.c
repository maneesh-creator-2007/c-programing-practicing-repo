#include<stdio.h>
int main() {
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a>0){
        printf("a is positive\n");
    }
    else if(a<0){
        printf("a is negative\n");
    }
    else{
        printf("a is zero\n");
    }
    return 0;
}