#include<iostream>
using namespace std;
class RBI
{
	public:
		void parent()
		{
			cout<<"the parent function"<<endl;
		}
		
		void insurance()
		{
			cout<<"the insurance function"<<endl;
		}
		void funding()
		{
			cout<<"the funding function"<<endl;
		}
};
class SBI:public RBI
{
	public:
		void child1()
		{
			cout<<"child 1"<<endl;
		}
		void insurance()
		{
			cout<<"insurance"<<endl;
			
		}
		void car_loan()
		{
			cout<<"car_loan"<<endl;
		}
};
class HDFC
{
	public:
		void child2()
		{
			cout<<"child 2"<<endl;
			
		}
		void insurance()
		{
			cout<<"insurance from hdfc"<<endl;
		}
		 void car_loan()
		 {
		 	cout<<"carloan"<<endl;
		 }
	};
	class PNB{
		public:
			void child3()
			{
				cout<<"child3"<<endl;
			}
			void insurance()
			{
				cout<<"insurance from pnb"<<endl;
			}
			void home_loan()
			{
				cout<<"homeloan"<<endl;
			}
	};
	class ICIC:public HDFC,public PNB,public SBI{
		public:
			void child4()
			{
				cout<<"child"<<endl;
				
			}
			void insurance()
			{
				cout<<"insurance from icic"<<endl;
			}
	};
int main()
{
	ICIC i1;
	i1.RBI::insurance();
	i1.SBI::insurance();
	i1.PNB::insurance();
	i1.HDFC::insurance();
	i1.insurance();
}
