#include<iostream>
using namespace std;
	
         
class parent {
	public:
		
		int a=3;
          int b=4,c; 
          
		int multi(int c)
		{
		
			c=a*b;
		return c;	
		}
		
};
class child:public parent
{
	public:
		 int s=56;
		 int print()
		{
			cout<<multi(c);
		}
};
int main()
{
	
	class child c1;
	c1.print();
}
