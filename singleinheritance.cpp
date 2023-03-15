//inheritance
#include<iostream>
using namespace std;
class parent {
	public:
		int a=100;
};
class child:public parent {
	public:
	int b=50;
};
int main()
{
 class child c1;
cout<<c1.a<<endl;
cout<<c1.b<<endl;	
}
