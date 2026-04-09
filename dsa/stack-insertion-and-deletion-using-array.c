#include<stdio.h>
#define SIZE 15
int stack[SIZE];    
int top = -1;
void push(int x){
    if (top==SIZE-1){
        printf("stack is overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1){
        printf("stack is underflow");

    }
    else{
        top--;
    }
}

void peek(){
    if (top==-1){
        printf("stack is empty");
    }
    else{
        printf("top element is %d",stack[top]);
    }
}


void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("stack elements are:");
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
    }
}



void main(){
    push(2);
    push(3);
    push(9);
    display();
    pop();
    pop();
    display();
    push(9);
    peek();
    display();
}