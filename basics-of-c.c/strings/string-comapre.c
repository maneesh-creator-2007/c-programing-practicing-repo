#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="abcd";
    char s2[20]="aBcd";
    char s3[30]="aBcd";
    int res;
    res = strcmp(s1,s2);
    printf("result of comparing s1 and s2 is %d\n",res);
    res = strcmp(s2,s3);
    printf("result of comparing s2 and s3 is %d\n",res);
    return 0;
}
