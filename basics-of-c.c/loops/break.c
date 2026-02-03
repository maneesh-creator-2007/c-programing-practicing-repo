#include <stdio.h>
int main(){
   int i,n;
   printf("enter the values of n:");
   scanf("%d",&n);
   printf("the loop will be terminated when i=10\n");
   for(i=1;i<=n;i++){
    if(i==10){
        break;
    }
    printf("%d",i);
   }
   return 0;
}