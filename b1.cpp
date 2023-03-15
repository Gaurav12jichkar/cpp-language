#include<stdio.h>
int voting();
int main(){
	voting();
}
int voting()
{
	int age;
	char ch;
	printf("\nenter your country name");
	scanf("%c",&ch);
	printf("\nenter your age");
	scanf("%d",&age);
	
	if((age>18)&&(ch=='i'))
	{
		printf("your eligible for voting");
	}
	else
	{
			printf("your not eligible for voting");
	}
	}

