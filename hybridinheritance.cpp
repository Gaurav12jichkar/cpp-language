#include<iostream>
using namespace std;
class A
	{
		protected:
			int a;
			public:
				void valuea()
				{
				cout<<"enter the vlaue of a"<<endl;
				cin>>a;	
				}
	};
	class B:public A
		{
			protected:
				int b;
				public:
				void valueb()
				{
					cout<<"enter the value of b:"<<endl;
					cin>>b;
				}
		};
	class C
		{
			protected:
				int c;
				public:
				void valuec()
				{
					cout<<"enter the value of c"<<endl;
					cin>>c;
				}
		};
	class D:public B,public C
	{
		public:
			void mul()
			{
				valuea();
				valueb();
				valuec();
				cout<<"multiplication of a,b,c"<<a*b*c<<endl;
			}
		};
			int main()
			{
				D d1;
				
				d1.mul();
			}
			
