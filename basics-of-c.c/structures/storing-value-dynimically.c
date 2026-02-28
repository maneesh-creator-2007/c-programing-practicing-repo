#include <stdio.h>

struct two {
    int s;
    char z[20];
} n1;

int main() {
    printf("enter a number to store inside a structure: ");
    scanf("%d", &n1.s);
    printf("entered number is: %d\n", n1.s);
    printf("enter name: ");
    scanf("%s", n1.z);
    printf("entered name is: %s\n", n1.z);
    return 0;
}