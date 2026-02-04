#include <stdio.h>
int main(){
    int n,i,key,found=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the %d elements in the array:\n ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("element found at position %d :\n",i+1);
            found=0;
            break;
        }
        else{
           // printf("element is not found.\n");
            found=1;
        }
    }
    return 0;
}