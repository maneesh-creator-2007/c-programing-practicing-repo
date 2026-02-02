#include<stdio.h>
int main() {
    char a;
    printf("if you want to join to our groupe\n");
    printf("enter only y(yes) and n(no):\n");
    scanf("%c",&a);
    switch(a){
        case 'y':
            printf("you are welcome to our groupe\n");
        break;
        case 'n':
            printf("sorry you can't join to our groupe\n");
        break;
    default:
        printf("invalid value\n");
    }

}