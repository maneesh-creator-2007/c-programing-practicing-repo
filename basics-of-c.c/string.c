#include<stdio.h>
int main(){
    char s[10];
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the string:");
    for(i=0;i<n;i++)
    {
    scanf("%s",&s[i]);
    }
    printf("the entered string is :%s\n",s);
    return 0;
}