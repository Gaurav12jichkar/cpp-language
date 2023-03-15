#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			int valuea(int n)
			{
				a=n;
			}
};
class B
{
	protected:
		int b;
		public:
			int valueb(int n)
			{
				b= n;
			}
			
};
class C:public A,public B
{
	public:
		int vlauec()
		{
			cout<<"value of a"<<a<<endl;
			cout<<"value of b"<<b<<endl;
			cout<<"value of a+b"<<a+b<<endl;
		}
};
int main()
{
C c1;
c1.valuea(20);	
c1.valueb(46);
c1.vlauec();
}
