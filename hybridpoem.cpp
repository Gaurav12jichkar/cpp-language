#include<iostream>
using namespace std;
class A
{
	public:
		void one()
		{
			cout<<"Twinkle, twinkle, little star,"<<endl;
			cout<<"How I wonder what you are!"<<endl;
		}
		void two()
		{
			cout<<"Up above the world so high,"<<endl;
			cout<<"Like a diamond in the sky."<<endl;
		}
};
class B:public A
{
	public:
		void third()
		{
			cout<<"When the blazing sun is gone,";
			cout<<"When he nothing shines upon,"<<endl;
			cout<<"Then you show your little light,"<<endl;
			cout<<"Twinkle, twinkle, all the night."<<endl;
		}
};
class C
{
	public:
		void fourth()
		{
			cout<<"Then the traveler in the dark"<<endl;
			cout<<"Thanks you for your tiny spark,"<<endl;
			cout<<"How could he see where to go,"<<endl;
			cout<<"If you did not twinkle so?"<<endl;
						
		}
};
class D
{
	public:
		void fifth()
		{
			cout<<"In the dark blue sky you keep,"<<endl;
			cout<<"Often through my curtains peep"<<endl;
			cout<<"For you never shut your eye,"<<endl;
			cout<<"Till the sun is in the sky."<<endl;
		}
};
class E:public B,public C,public D
{
	public:
		void sith()
		{
			cout<<"As your bright and tiny spark"<<endl;
			cout<<"Lights the traveler in the dark,"<<endl;
			cout<<"Though I know not what you are,"<<endl;
			cout<<"Twinkle, twinkle, little star."<<endl;
		}
};
int main()
{
	E e1;
	e1.one();
	e1.two();
	e1.third();
	e1.one();
	e1.fourth();
	e1.one();
	e1.fifth();
	e1.one();
	e1.sith();
	e1.one();
}







