#include<stdio.h>

struct address
{
	char city[20];
	int pincode;
	char phone[15];
	
};

struct student
{
	char name[20];
	struct address add;
};

int main()
{
	struct student s2;
	printf("enter student information\n");
	scanf("%s %s %d %s", s2.name,s2.add.city,&s2.add.pincode,s2.add.phone);
	printf("printing the student information\n");
	printf("\n name: %s\ncity: %s\npincode: %d\nphone: %s",s2.name,s2.add.city,s2.add.pincode,s2.add.phone);
	
}

