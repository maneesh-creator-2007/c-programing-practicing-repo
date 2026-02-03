#include <stdio.h>
int main(){
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the values without 7 and 9:\n");
    for(i=1;i<n;i++){
        if(i%2==1){//if i=9 or i=7 the values not printed.
            continue;//i%2==0 means odd numbers.
        }//i%2==0 means even numbers.
        printf("%d ",i);
    }
    return 0;
}