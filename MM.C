#include<stdio.h>
#include<conio.h>
#include<limits.h>
int Matrix_Chain_Multiplication(int[], int, int);
void main()
{
    int n,i,a[10];
    clrscr();
    printf("Enter no of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	scanf("%d",&a[i]);
    }

    printf("Minimum number of matrix multiplications is %d ", Matrix_Chain_Multiplication(a, 1, n-1));
    getch();
    }
int Matrix_Chain_Multiplication(int p[], int i, int j)
{

    int k;
    int min = INT_MAX;
    int count;
     if(i == j)
	return 0;

    for (k = i; k <j; k++)
    {
	count = Matrix_Chain_Multiplication(p, i, k) +Matrix_Chain_Multiplication(p, k+1, j) +
		p[i-1]*p[k]*p[j];

	if (count < min)
	    min = count;
    }
  return min;
}

