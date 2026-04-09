#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *top=NULL,*temp=NULL;

void push(int x){
    if (top==NULL){
        top=(struct node*)malloc(sizeof(struct node));
        top->data=x;
        top->next=NULL;
    }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=top;
        top=temp;
    }
}


void pop(){
    if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        temp=top;
        top=top->next;
        free(temp);
    }
}

void peek(){
     if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        printf("top element is %d\n",top->data);
    }
}


void display(){
      if(top==NULL){
        printf("stack is empty\n");
    }
    else{
        printf("stack elements are: ");
        temp=top;
        while(temp != NULL){
              printf("%d ",temp->data);
              temp=temp->next;
        }
        printf("\n");
}
}


int main(){
    push(2);
    push(3);
    push(9);
    display();
    pop();
    pop();
    push(9);
    peek();
    return 0;
}