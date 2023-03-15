#include<stdio.h>
int main()
{
	int a=50;
	int *p;
	int **pp;
	  p=&a;
	  pp=&p;
	printf("\nvalue of a :%d",a);
	printf("\nvalue of *p:%d",*p);
	printf("\nvalue of **pp:%d",**pp);
	printf("\naddress of p:%x",&a);
	printf("\naddress of *PP:%x",&(**pp));
	printf("\naddress of p:%x",p);
	
}
