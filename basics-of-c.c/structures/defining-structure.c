#include<stdio.h>
struct new{
    int a;
    char b;
};//here we can add variable name to the structure but it is not necessary. We can also create variable of structure type without giving it a name.
int main(){
        int c;
        printf("enter the value of c:");
        scanf("%d",&c);
        struct new a;
        a.a=100;
        printf("%d",a.a);
        a.b='A';
        printf("\n %c",a.b);
        printf("\n%d",c);
        return 0;
}