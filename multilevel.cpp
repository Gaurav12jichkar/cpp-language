//multiple inheritance

#include<iostream>
using namespace std;
class a
{
public:
	void start()
	{
	cout<<"hello"<<endl;	
	}
	
};
class b:public a
{
	public:
	void midd()
	{
		cout<<"hi am gaurav"<<endl;
	}
};
class c:public b
{
	public:
	void stop()
	{
		cout<<" gggg"<<endl;
	}
};
int main()
{
	  c c1;
	 c1.start();
	 c1.midd();
	 c1.stop();
	
}
