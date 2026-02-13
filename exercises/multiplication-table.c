#include <stdio.h>
int main(){
    int n,i,result;
    printf("enter the value of n :");
    scanf("%d",&n);
    for (i=1;i<=20;i++){
        result=n*i;
        printf("%d * %d = %d\n",n,i,result);
    }
    return 0;
}