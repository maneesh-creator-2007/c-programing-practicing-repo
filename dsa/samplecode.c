#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
int stack[MAXSIZE], top=-1;
void push(int item)
{
if(top==MAXSIZE-1)
printf("stack is overflow\n");
else
{
top=top+1;
stack[top]=item;
}

}
void pop()
{
int data;
if(top==-1)
printf("stack is empty\n");
else
{
data=stack[top];
printf("popped element id %d\n",data);
top=top-1;

}
}
void isFull()
{
if(top==MAXSIZE-1)
printf("stack is full\n");
else
printf("stack is not full\n");
}
void isEmpty()
{
if(top==-1)
printf("stack is empty\n");
else
printf("stack is not empty\n");
}
void peek()
{
if(top==-1)
printf("stack is empty\n");
else
printf("top element is %d\n",stack[top]);
}
void display()
{
if(top==-1)
printf("stack is empty\n");

for(int i=top;i>-1;i--)
{
printf("|%d|\n",stack[i]);
}
}
int main()
{
int choice,data;
while(1)
{
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Is empty?\n");
printf("4.Is full?\n");
printf("5.Peek\n");
printf("6.Display\n");
printf("7.Quit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the element you want to push on stack: ");
scanf("%d",&data);
push(data);
break;
case 2:

pop();

break;
case 3:
isEmpty();
break;
case 4:
isFull();
break;
case 5:
peek();
break;
case 6:
display();
break;
case 7:
exit(1);
default:
printf("Wrong choice\n");

}
}
return 0;
}