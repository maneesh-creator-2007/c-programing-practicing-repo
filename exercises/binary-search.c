#include <stdio.h>
int main(){
    int n,j,i,key,found=0;
    int low,high,mid;
    printf("enter the value of n:");
    scanf("%d",&n);
    int a[n];
    printf("NOTE: that the elements of array must be in sorted order.\n");
    printf("enter the %d elements of the array :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value to search:");
    scanf("%d",&key);
    low=0;
    high=n-1;
      while (low<=high)
      {
               mid=(low+high)/2;
               if(a[mid]==key){
                printf("the element is found");
                found=1;
                break;
               }
               else if(a[mid]<key) {
                low=mid+1;
               }
               else if(a[mid]>key){
                high=mid-1;
               }
      }
      if(found==0){
        printf("the element is not found");
      }
    return 0;
    }