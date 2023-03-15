#include<iostream>
using namespace std;
class shape
{
public:
int a,b;
int getdata(int m,int n)
{
	a=m;
	b=n;
	}	
};
class rectangle:public shape
{
public:
int rect()
{
	int result=a*b;
	return result;
	}	
};
class triangle:public shape
{
	public:
		int tri()
		{
			float result=0.5*a*b;
			return result;
		}
};
int main()
{
  rectangle r;
	triangle t;
	int length,breadth,base,height;
	cout<<"enter the length and breadth of a rectangle"<<endl;
	cin>>length>>breadth;
	r.getdata(length,breadth);
	int monu=r.rect();
	cout<<"Area of the rectangle is :"<<monu<<endl;
	cout<<"enter the base and height of the triangle"<<endl;
	cin>>base>>height;
	t.getdata(base,height);
	float bola=t.tri();
	cout<<"Area of the triangle is :"<<bola<<endl;

}
