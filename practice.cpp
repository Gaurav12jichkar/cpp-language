#include<iostream>
using namespace std;
class A
{
	public:
		int age;
		float sal;
		string name;
		A(int a,float s,string n)
		{
			age=a;
			sal=s;
			name=n;
		}
		void disp()
		{
			cout<<age<<" "<<sal<<" "<<name<<" ";
		}
		
};
int main()
{
	
	A a1= A(45,23000,"ghghh");
	a1.disp();
//	a1.age=67;
//	a1.sal=15000;
//	a1.name="gaurav";
//	cout<<a1.age<<endl;
//	cout<<a1.name<<endl;
//	cout<<a1.sal<<endl;
}
