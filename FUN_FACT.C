#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	int res=1,i;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}
void main()
{
	int n,ans;
	clrscr();
	printf("Enter the number=");
	scanf("%d",&n);
	ans=fact(n);
	printf("Factorial of %d is=%d",n,ans);
	getch();
}
