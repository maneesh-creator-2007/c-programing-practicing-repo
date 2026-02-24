#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10];
    printf("enter the first string:");
    gets(s1);
    printf("enter the second string:");
    gets(s2);
    strcat(s1,s2);
    printf("the concatenated string is: %s",s1);
    return 0;
}