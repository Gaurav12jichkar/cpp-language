#include<iostream>
using namespace std;
class parent{
	public:
	void sum()
	{
		int a=3;
		int b=2;
		int c;
	  c= a+b;
	  cout<<"c"<<c<<endl;
	}
};
class child:public parent{
	public:
		void min()
		{
			int s=4;
			int d=3;
			int g;
			g=s-d;
			cout<<"g"<<g<<endl;
		}
};
int main(){
	class child c1;
	cout<<c1.sum();
	cout<<c1.min();
}
