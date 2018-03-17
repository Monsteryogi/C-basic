#include<stdio.h>
#include<conio.h>
int fact(int n);
void main()
{
	int n,ans;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial is %d.",ans);
	getch();
}
int fact(int n)
{
	int res;

	if(n==1)
	{
		return 1;
	}
	else
	{
		res=n*fact(n-1);
		return res;
	}
}