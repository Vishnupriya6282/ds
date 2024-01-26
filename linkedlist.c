#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}
*top,*top1,*temp;

void push(int element)
{
if(top == NULL)
{
top=(struct node*)malloc(1*sizeof(struct node));
top->link= NULL;
top->data= element;
printf("\n%d inserted",element);
}
else
{
temp=(struct node*)malloc(1*sizeof(struct node));
temp->link=top;
temp->data=element;
top=temp;
printf("\n%d inserted",element);
}
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("\nempty");
}
else
{
top1=top->link;
printf("\npopped elements %d\n ", top->data);
free(top);
top=top1;
}
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("empty");
}
else
{
while(top1!=NULL)
{
printf("%d>>",top1->data);
top1=top1->link;
}
}
}

void main()
{
int ch,element;
while(ch!=4)
{

printf("\n 1.insertion");
printf("\n 2.delection");
printf("\n 3.display");
printf("\n 4.exit");
printf("\n enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("\nenter the element: ");
scanf("%d",&element);
push(element);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:

exit(1);


default:

printf(" please enter a valid choice");

}

}
}
