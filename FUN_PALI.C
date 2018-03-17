//function with no argument and return type.
#include<stdio.h>
#include<conio.h>
void ascending();
void main()
{
	clrscr();
	ascending();
	getch();
}
void ascending()
{
	int i,a[20],n,temp,j;
	printf("Enter the number of elements=");
	scanf("%d",&n);
	printf("Enter the elements=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Numbers in ascending order=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

