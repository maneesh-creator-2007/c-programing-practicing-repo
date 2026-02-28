#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s1[n];
    printf("the length of string :");
    scanf("%d",&n);
    printf("enter the string:");
    scanf("%s",s1);
    printf ("the reversed string is :%s",strrev(s1));
    return 0;
}