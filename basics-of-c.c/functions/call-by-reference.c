#include <stdio.h>
int changed(int *p);
int main(){
    int a=50;
    printf("the value of a before calling the function is a=%d\n",a);
    changed(&a);
    printf("the value of a after calling the function is a=%d\n",a);
    return 0;
}

int changed(int *p){
    printf("before changing the value of the a in the called function is =%d\n",*p);
    *p=30;
    printf("after the value changed the value of a in the called function is =%d\n",*p);
}