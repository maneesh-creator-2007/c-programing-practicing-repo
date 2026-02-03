#include <stdio.h>
int subtract(int x, int y);

int main(){
    int a,b,result;
    printf("enter the values of a and b:");
    scanf("%d%d",&a,&b);
    if(a < b){
        printf("subtraction not possible\n");
    } else {
        result=subtract(a,b);
        printf("the subtraction of two numbers is %d\n",result);
    }
    return 0;
}

int subtract(int x,int y){
    return x - y;
}
