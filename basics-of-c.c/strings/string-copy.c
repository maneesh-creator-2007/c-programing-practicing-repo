#include <stdio.h>
#include <string.h>
int main(){
    char str[20]="hello world";
    char str2[20];
    strcpy(str2,str);
    puts(str2);
    return 0;
}