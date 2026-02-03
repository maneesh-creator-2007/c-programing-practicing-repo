#include <stdio.h>
int call(int z, int y);//function definition

int main(){
    int a=10,b=20;
    printf("the values before the function called are a=%d and b=%d\n",a,b);
    call(a,b);//function call
    printf("the values after the function called are a=%d and b=%d\n",a,b);
    return 0;
}

int call(int z,int y){//called function
    z=40;
    y=59;
    printf("the values inside the function are z=%d and y=%d\n",z,y);
}