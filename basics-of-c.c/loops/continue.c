#include <stdio.h>
int main(){
   int i,n;
   printf("enter the values of n:");
   scanf("%d",&n);
  
   for(i=1;i<=n;i++){//it prints only odd numbers
    if(i%2==0){//if i%2==1 it prints only even numbers
       continue;//if the condition is i==7 and i==9 it skips those two numbers
    }
    printf("%d ",i);
   }
   return 0;
}