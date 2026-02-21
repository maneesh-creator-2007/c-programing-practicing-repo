#include <stdio.h>
    int main(){
        int n,i,j;
        printf("enter the value of n:");
        scanf("%d",&n);
        for(i=0;i<n;i++){
            printf(" ");
            for(j=0;j<n-1-i;j++){
                printf(" ");
            }
            for(j=0;j<2*i+1;j++){
                printf("*");
            }
            printf("\n");
        }
        for(i=n-2;i>=0;i--){
            printf(" ");
            for(j=0;j<n-1-i;j++){
                printf(" ");
            }
            for(j=0;j<2*i+1;j++){
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }