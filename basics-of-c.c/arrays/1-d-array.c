#include <stdio.h>
int main(){
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];//this is initilization of array .
    printf("enter the elementes of the array:\n");
    for(i=0;i<n;i++){//loop to read the values of array.
        scanf("%d",&a[i]);//this is the input values of the array.
    }
    printf("the entered elements of the array are:\n");
    for(i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
    return 0;
}