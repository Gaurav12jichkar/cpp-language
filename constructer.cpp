#include<iostream>
using namespace std;
class stu
{
	public:
		int id;
		string name;
		//paramiterized constructor//
		stu(int i,string n)
		{
			id=i;
			name=n;
			
		}
		void display()
		{
			cout<<id<<""<<name<<endl;
		}
};
int main()
{
	stu s1,s2,s3;
	stu s1= stu(123,"abc");
	s1.display();
	
}
