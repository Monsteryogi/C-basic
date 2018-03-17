#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	clrscr();
	printf("Enter the character=");
	scanf("%c",&n);//store character in n.
	printf("ASCII value of %c=%d",n,n);//for displaying ascii value.
	getch();
}