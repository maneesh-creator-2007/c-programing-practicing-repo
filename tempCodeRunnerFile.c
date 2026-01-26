// checking whether the given number is a prime number or not.
#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("enter the positive number");
    scanf("%d",&num);
    if(num<2)
    {
        printf("the entered number is not a prime number");
    }
    else
    {
        for(i=2;i<num;i++)
            if(num%i==0)
            {
                flag=1;
                break;
            }
        if(flag==0)
        {
            printf("the entered number %d is a prime number.",num);
        }
        else
        {
            printf("the entered number %d is not a prime number",num);
        }
    }
    return 0;
}