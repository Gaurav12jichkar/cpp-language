#include<iostream>
using namespace std;
class A{
	public:
		int c;
		multi(int a, int b)
		{
			return a*b;
		
		}
};
class B:public A{
	public:
print(int a,int b)
{
	cout<<"multiplication is"<<multi(a,b);
}
};
int main(){
	int a,b;
	cin>>a>>b;
	class B obj;
	obj.print(a,b);
	return 0;
}
