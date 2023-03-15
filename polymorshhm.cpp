#include<iostream>
using namespace std;
class programmer{
	public:
		void code()
		{
			cout<<"employee exicute the code"<<endl;
		}
};
class Employee{
	public:
		void code()
		{
			cout<<"employee running the code"<<endl;
		}
};
int main()
{
	programmer p1;
		p1.code();
	Employee e1;
	e1.code();
	
}
