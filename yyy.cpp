#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,k;
	do
	{
		int j=1;
		do
		{
		k=i*j;
		printf("\t\n %d",k);
		j++;
		}while(j<=10);
		
		printf("\t\n");
		i++;
		
		
	}while(i<=10);
	int p=1,r;
	do
	{
		int q=1;
		do
		{
		r=p*q;
		printf("\n %d",r);
		q++;
		}while(q<=10);
		
		printf("\t\n");
		p++;
		
		
	}while(p<=20);
}

