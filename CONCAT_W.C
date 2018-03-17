#include<stdio.h>
#include<conio.h>
void concat(char[],char[]);
int strlen(char[]);
void main()
{
	char str1[20],str2[10];
	clrscr();
	printf("Enter the string=");
	gets(str1);
	printf("Enter the string=");
	gets(str2);
	concat(str1,str2);
	printf("Concated string=%s",str1);
	getch();
}
void concat(char str1[],char str2[])
{
	int i,j;
	i=strlen(str1);
	for(j=0;str2[j]!='\0';i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
}
int strlen(char str1[])
{
	int i=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	return i;
}



