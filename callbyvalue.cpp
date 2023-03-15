#include<iostream>
using namespace std;
void change(int a);
int a=10;
int main()
{
	int a=5;
	change(a);
	cout<<"value of a="<<::a<<endl;
}
void change(int a)
{
	a=5;
}
