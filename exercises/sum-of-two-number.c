//sum and average of two numbers

#include <stdio.h>
int main(){
    int a,b,sum,avg;
    printf("enter two integer values:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    avg=sum/2;
    printf("the sum of the two integers is :%d\n",sum); 
    printf("the average of the two integers is :%d\n",avg);
    return 0;
}