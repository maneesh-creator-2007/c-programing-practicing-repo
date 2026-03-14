#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*head,*new,*temp;  
int n,i;
void create_node(){
    int val;
    printf("enter the no. of nodes to be created:");
    scanf("%d",&n);
    head=NULL;
    for(i=0;i<n;i++){
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
        if (head==NULL){
            head=new;
        }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new;
        }
    }
}
void display(){
    if(head==NULL){
        printf("the list is empty");
    }
    else{
        temp=head;
    for(i=0;i<n;i++){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    }
}
int main(){
    create_node();
printf("the linked list is :");
display();
return 0;
}