#include<iostream>
using namespace std;
class high{
	private:
		int a,b;
		public:
			if(a>b)
			{
				cout<<"a is greter";
				
			}
			else{
				cout<<"b is greter";
			}
			friend int gs(high);
};
int gs(high h)
{
	
}
