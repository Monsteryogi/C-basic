#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[10],temp,n,min;
	clrscr();
	printf("Enter an array size=");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sorted Elements Are:");
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("%d\n",a[i]);
	}
	getch();
}