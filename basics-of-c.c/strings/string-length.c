#include <stdio.h>
#include <string.h>
int main(){
    char s[20]="hello world";
    char b[20]={'h','e','l','l','o',' ','w','o','r','l','d'};
    printf("length of the string is a %d\n",strlen(s));
    printf("length of the string b is %d\n",strlen(b));
    return 0;
}