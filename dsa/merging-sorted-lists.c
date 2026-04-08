#include<stdio.h>
int main(){
    int i,j,key,n,sum;
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of array is :");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("enter the targeted number:");
    scanf("%d",&key);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n-1;j++){
            sum=a[i]+a[j];
            if(sum==key){
                printf("[%d,%d]",i,j);
            }
        }
    }
    return 0;
}