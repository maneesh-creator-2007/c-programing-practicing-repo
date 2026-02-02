#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0,j=0;i<n;i++,j++){
        printf("%d%d\n",i,j);
    }
    return 0;
}