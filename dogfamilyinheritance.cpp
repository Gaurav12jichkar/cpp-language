#include<iostream>
using namespace std;
class Animal
{
	public:
		void animal()
		{
			cout<<"Animal"<<endl;
		}
};
class mammal:public Animal
{
	public:
		void mam()
		{
			cout<<"mammal"<<endl;
		}
};
class Dog:public mammal
{
	public:
		void dog()
		{
			cout<<"dog"<<endl;
		}
};
class cat:public mammal
{
	public:
		void c()
		{
			cout<<"cat"<<endl;
			
		}
};
class poodle:public Dog
{
	public:
		
		
			void spot()
			{
				cout<<"spot"<<endl;
				
			}
			void fido()
			{
				cout<<"fido"<<endl;
			}
			void emie()
			{
				cout<<"emie"<<endl;
			}
		
		
};
int main()
{
	mammal m1;
	Dog d1;
	cat c1;
	poodle p1;
	m1.animal();
	m1.mam();
	d1.dog();
	//c1.c();
	p1.spot();
	p1.fido();
	p1.emie();
}
