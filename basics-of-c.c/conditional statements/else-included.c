#include <stdio.h>
int main() {
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("a is greate than b\n");
        printf("it is inside the if block\n");
    }
    else{
        printf("a is less than b\n");
        printf("it is inside the else block\n");
    }
    return 0;
}