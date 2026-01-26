// finding the leap year using c language
#include <stdio.h>
int main(){
    int Year;
    printf("enter the year:");
    scanf("%d",&Year);
    if(Year%4==0&&Year%100!=0)
    {
        printf("%d is a leap year \n",Year);
    }
    else
    {
        printf("the entered year %d is not a leap year\n",Year);
    }
    return 0;
    
}