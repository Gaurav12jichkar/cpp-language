#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
};
int main()
{
	int i;
	struct student s1[5];
	for(i=0;i<5;i++)
	{
		printf("\nenter the rollno");
		scanf("%d",&s1[i].rollno);
		printf("\nenter the name");
		scanf("%d",&s1[i].name);
	}
	printf("student data");
	for(i=0;i<5;i++)
	{
	printf("\nrollno name:%d name:%s",s1[i].rollno,s1[i].name);	
	}
}
