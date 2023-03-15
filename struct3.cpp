#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	int rollno;
	float marks;
}s1;
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the name,rollno,marks:%d",i+1);
		scanf("%s %d %f",&s1.name[i],&s1.rollno,&s1.marks);
		
	}
	printf("printing number");
	for(i=0;i<3;i++)
	{
		printf("%s\n",s1.name);
		printf("%d\n",s1.rollno);
		printf("%f\n",s1.marks);
	}
}
