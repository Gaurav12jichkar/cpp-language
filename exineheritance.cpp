#include<iostream>
using namespace std;
class A
{
	public:
	void vehical()
	{
		cout<<"Engine"<<endl;
		cout<<"Wheel"<<endl;
		cout<<"Horns"<<endl;
		
	}
};
class B:public A
{
	public:
		void cars()
		{
			cout<<"petorl"<<endl;
		}
};
class C:public B
{
	public:
		void trucks()
		{
			cout<<"diesel"<<endl;
		}
};
int main()
{
	C c1;
	c1.vehical();
	cout<<endl;
	c1.vehical();
	c1.trucks();
	cout<<endl;
	c1.vehical();
	c1.cars();
}
