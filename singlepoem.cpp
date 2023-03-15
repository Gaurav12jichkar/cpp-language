#include<iostream>
using namespace std;
class A
{
	public:
		void aa()
		{
			cout<<"Twinkle, twinkle, little star"<<endl;
			cout<<"How I wonder what you are!"<<endl;
			
		}
};
class B:public A
{
	public:
		void bb()
		{
			cout<<"Up above the world so high,"<<endl;
			cout<<"Like a diamond in the sky."<<endl;
			cout<<endl;
		}
		void cc()
		{
			
		
			cout<<"When the blazing sun is gone,"<<endl;
			cout<<"When he nothing shines upon,"<<endl;
			cout<<"Then you show your little light,"<<endl;
			cout<<"Twinkle, twinkle, all the night."<<endl;
		}
			
		  void dd()
		  {
		  
			
			cout<<endl;
			cout<<"Then the traveler in the dark"<<endl;
			cout<<"Thanks you for your tiny spark,"<<endl;
			cout<<"How could he see where to go,"<<endl;
			cout<<"If you did not twinkle so?"<<endl;
	}
			void ee()
			{
			
			cout<<endl;
			cout<<"In the dark blue sky you keep,"<<endl;
			cout<<"Often through my curtains peep"<<endl;
			cout<<"For you never shut your eye,"<<endl;
			cout<<"Till the sun is in the sky."<<endl;
		}
			void ff()
			{
			
			cout<<endl;
			cout<<"As your bright and tiny spark"<<endl;
			cout<<"Lights the traveler in the dark,"<<endl;
			cout<<"Though I know not what you are,"<<endl;
			cout<<"Twinkle, twinkle, little star."<<endl;
		}
			
			
			
		
};
int main()
{
B b1;
b1.aa();
b1.bb();
b1.cc();
b1.aa();
b1.dd();
b1.aa();
b1.ee();
b1.aa();
b1.ff();
}
