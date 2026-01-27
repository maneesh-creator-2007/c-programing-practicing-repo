#include <stdio.h>
int main(){
float units,bill,sc;
printf("enter the no of units consumed:");
scanf("%f",&units);
if(units <=100)
{
    bill=units*1.20;
}
else if(units<=200)
{
    bill=100*1.20 + (units-100)*2.50;
}
else if(units<=300)
{
    bill=100*1.20 + 100*2.50 + (units-200)*3.5;
}
else if (units<=400)
{
    bill=100*1.20 + 100*2.50 + 100*3.5 + (units-300)*3.50;
}
else if (units>400)
{
    bill=100*1.20 + 100*2.50 + 100*3.5 + 100*3.50 + (units-400)*4.90;
}
printf("enter the sur charges:");
scanf("%f",&sc);
bill=bill+sc;
printf("the total bill is:%.2f",bill);
return 0;
}