//recursion
#include<stdio.h>
#include<conio.h>
int armstrong(int n);
void main()
{
	int n,temp,ans;
	clrscr();
	printf("Enter number you want to check=");
	scanf("%d",&n);
	temp=n;
	ans=armstrong(temp);
	if(ans==temp)
	{
		printf("It is a armstrong number.");
	}
	else
	{
		printf("it is not a armstrong number.");
	}
	getch();
}
int armstrong(int temp)
{
	int sum=0;
	if(temp==0)
	{
		return 0;
	}
	else
	{
		sum=(temp%10)*(temp%10)*(temp%10)+armstrong(temp/10);
	}
		return sum;

}




