#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 5
int a[MAX],top=-1,c,x,i;
void push();
void pop();
void display();
void main()
{

clrscr();


do
{
 printf("1:PUSH \n");
 printf("2:Pop\n");
 printf("3:Display\n");
 printf("4:Exit\n");

 printf("enter choice:\n");
 scanf("%d",&c);

 switch(c)
 {
  case 1: push();
	  break;
  case 2: pop();
	  break;
  case 3: display();
	  break;
  case 4: exit(0);
	  break;
 default:
	  printf("Invalid option\n");
	  break;
 }
} while(c>1||c<4);

getch();
}

void push()
{

 if(top==MAX)
 {
  printf("stack overflow\n");
 }
 else
 {
  printf("enter item to insert\n");
  scanf("%d",&x);

  top=top+1;
  a[top]=x;
 }
}
void pop()
{

 if(top<0)
 {
  printf(" stack underflow \n");
 }
 else
 {
  x=a[top];
  top=top-1;
  printf("\nItem to be deleted %d \n",x);
 }
}

void display()
{
 if(top==-1)
 {
  printf("\nstack is empty");
 }
 else
 {
  for(i=0;i<MAX;i++)
  {
  printf("\nvalue of a[%d]=%d \n",i,a[i]);
  }
 }

}
