#include<stdio.h>
#include<conio.h>
void sum(int a,int b);
void main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	sum(int a,int b);
	getch();
}
void sum(int x,int y)
{
	int sum;
	sum=x+y;
	printf("The addition is=%d",sum);

}