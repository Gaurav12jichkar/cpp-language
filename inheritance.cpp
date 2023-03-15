#include<iostream>
using namespace std;
class parent{
	public:
	int sum()
	{
		int a=56;
		int b=2;
		int c;
	  c= a+b;
	  cout<<c<<endl;
	}
};
class child:public parent{
	public:
		int min()
		{
			int s=48;
			int d=3;
			int g;
			g=s-d;
			cout<<g<<endl;
		}
};
int main()
{
	class child c1;
	 c1.  sum();
	 c1.  min();
}
