// conversion of fahrenheit to celsius and vise-versa
#include <stdio.h>
int main(){
    float F,C;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("the temperature in celsius is:%.2f\n",C);
    printf("enter temperature in celsius:");
    scanf("%f",&C); 
    F=(C*9/5)+32;
    printf("the temperature in fahrenheit is:%.2f\n",F);
    return 0;

}