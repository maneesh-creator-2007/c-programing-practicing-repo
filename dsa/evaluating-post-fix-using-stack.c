#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    stack[++top] = value;
}

// Pop operation
int pop() {
    return stack[top--];
}

// Function to evaluate postfix expression
int evaluatePostfix(char exp[]) {
    int i = 0;
    char ch;
    int op1, op2, result;

    while ((ch = exp[i++]) != '\0') {
        // If operand, push to stack
        if (isdigit(ch)) {
            push(ch-'0');
        }
        // If operator
        else {
            op2 = pop();
            op1 = pop();

            switch (ch) {
                case '+': result = op1 + op2; break;
                case '-': result = op1 - op2; break;
                case '*': result = op1 * op2; break;
                case '/': result = op1 / op2; break;
                case '^': result = pow(op1, op2); break;
            }

            push(result);
        }
    }

    return pop();
}

int main() {
    char exp[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    printf("Result = %d", evaluatePostfix(exp));

    return 0;
}
