#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5
int q[MAX],front=-1,rear=-1;
void insert();
void delet();
void display();
void main()
{
	int choice;
	clrscr();
	printf("****QUEUE  MENU****");
	do
	{
		printf("\n1.INSERT");
		printf("\n2.DELET");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT");
		printf("\nENTER YOUR CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();break;
			case 2:delet();break;
			case 3:display();break;
			case 4:exit(0);break;
			default:printf("Wrong Choice.");break;
		}
	}
	while(choice!=4);
	getch();
}
//Fuction for insert
void insert()
{
	int num;
	printf("\nEnter the number you want to enter=");
	scanf("%d",&num);
	if(front==0 && rear==MAX-1 || front==rear+1)
	{
		printf("Queue is Overflow");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		q[rear]=num;
	}
	else if(rear==MAX-1)
	{
		rear=0;
		q[rear]=num;
	}
	else
	{
		rear++;
		q[rear]=num;
	}
}
//Function for DELETION
void delet()
{
	int element;
	if(front==-1)
	{
		printf("QUEUE IS UNDERFLOW");
	}
	else
	{

	element=q[front];
	q[front]=0;
	if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==MAX-1)
	{
		front=0;
	}
	else
	{
		front++;
	}
	printf("\n DELETED element is %d",element);
	}
}
//Funtion for display
void display()
{
	int i,j=0;
	for(i=front;i<=rear;i++)
	{       j++;
		printf("\nq[%d]=%d",j,q[i]);
	}
}