#include <stdio.h>
#include <string.h>
int main(){
    char s[20];
    printf("enter the  value of string:");
    fgets(s, sizeof(s), stdin);
    printf("string in normal is %s\n",s);
    printf("string in upper case is %s\n",strupr(s));
    return 0;
}