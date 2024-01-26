#include<stdio.h>
int stack[100],size,top=-1,element,choice;

void push()
{	
	if(top==size-1)
		printf("STACK OVERFLOW");
	else
	{
		printf("\nenter the element to push: ");
		scanf("%d",&element);
		top=top+1;
		stack[top]=element;
		printf("\nelement pushed at top of stack");
	}
}

void pop()
{
	if(top==-1)
		printf("\nSTACK UNDERFLOW");
	else
	{
		element=stack[top];
		top=top-1;
		printf("\nelement popped: %d",element);
	}
}

void display()
{
	if(top==-1)
		printf("\nSTACK UNDERFLOW");
	else
	{
		printf("\nthe stack elements are:\n");
		for(int i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
	
void main()
{
	printf("\nenter the size of the array(max:100): ");
	scanf("%d",&size);
	do
	{
		printf("\n\nEnter the operation to perform:\n1.push\n2.pop\n3.display\n0.exit\nyour choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
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
			case 0:
				{
					printf("exiting\n");
					break;
				}
			default:printf("\ninvalid input");
		};
	}while(choice!=0);
}			
