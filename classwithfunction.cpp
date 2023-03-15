//class with function..
#include<iostream>
using namespace std;
class student{
	public:
		int id;
		string name;
		int rollno;
		void insert(int id,string name,int rollno)
		{
			this->id=id;
			this->name=name;
			this->rollno=rollno;
		}
		void print()
		{
			cout<<id<<" "<<name<<" "<<rollno<<endl;
		}
};
int main()
{
	student s1,s2;
	s1.insert(111,"gaurav",455);
	s2.insert(112,"chomu",344);
	s1.print();
	s2.print();
}
