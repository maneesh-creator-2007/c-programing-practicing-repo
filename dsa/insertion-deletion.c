#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL,*tail=NULL,*temp=NULL,*temp1=NULL,*new;
int i,n;
void create_node(){
    int val;
    printf("enter the no. of nodes to be created :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        new=(struct node*)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d",&val);
        new->data=val;
        if(head==NULL){
            new->next=NULL;
            head=new;
            tail=new;
        }
        else{
            tail->next=new;
            tail=new;
        }

    }
}

void create_one_node(){
    int val;
    new=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&val);
    new->data=val;
    new->next=NULL;
    return ;
}

void insert_at_begining(){
    create_one_node();
    if(head==NULL){
        printf("the list doesn't contain any data this is the first node");
        new->next=NULL;
        head=new;
        tail=new;
    }
    else{
        new->next=head;
        head=new;
    }
}


void insert_at_end(){
    create_one_node();
    if(head==NULL){
         printf("the list doesn't contain any data this is the first node");
        head=new;
        new->next=NULL;
    }
    else{
        temp=head;
        while(temp!=NULL){
        temp=temp->next;
        }
       tail->next=new;
       tail=new;
    }
}


void insert_at_pos(){
create_one_node();
int pos;
if(head==NULL){
      printf("the list doesn't contain any data this is the first node");
        head=new;
        new->next=NULL;
}
else{
printf("enter the value of position:");
scanf("%d",&pos);
while(temp!=NULL && i<pos-1){
    temp=temp->next;
    i++;
}
new->next = temp->next;
temp->next=new;
}
}


void delete_at_beg(){
    if(head==NULL){
        printf("the deletion is not possibe the list is empty");
        return;
    }
    else{
    temp=head;
    temp->next=head;
    free(temp);
    }
}

void delete_at_end(){
    if(head==NULL){
        printf("the deletion is not possibe the list is empty");
        return;
    }
    else{
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=tail;
        tail=temp1;
        temp=tail;
        free(temp);
    }
}


void delete_at_pos(){
    int pos;
    printf("enter the position of the node to be deleted.");
    scanf("%d",&pos);
      if(head==NULL){
        printf("the deletion is not possibe the list is empty");
        return;
    }
    else{
        while(temp!=NULL && i<pos){
             temp=temp1;
            temp=temp->next;
        }
       temp->next=temp1->next;
       free(temp);
    }
}


void display(){
    temp=head;
   while(temp->next!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main(){
    int ch;
    while(1){
    printf("\n1.create node.\n");
    printf("2.insert at begining.\n");
    printf("3.insert at end.\n");
    printf("4.insrert at position.\n");
    printf("5.delete at begining.\n");
    printf("6.delete at end.\n");
    printf("7.delete at position.\n");
    printf("8.display.\n");

    printf("choose the option:");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            create_node();
            break;
        }
        case 2:{
            insert_at_begining();
            break;
        }
        case 3:{
            insert_at_end();
            break;
        }
        case 4:{
            insert_at_pos();
            break;
        }
        case 5:{
            delete_at_beg();
            break;
        }
        case 6:{
            delete_at_end();
            break;
        }case 7:{
            delete_at_pos();
            break;
        }
        case 8:{
            display();
            break;
            exit(0);
        }
        default :{
            printf("enter a valid option.");
            break;
        }
    }
}
}