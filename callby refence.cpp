#include<iostream>
using namespace std;
int swap(int *x,int *y)
{
	int swap;
	swap=*x;
	*x=*y;
	*y=swap;
}
int main()
{
	int x=300,y=500;
	swap(&x,&y);
	cout<<"value of x" <<x<<endl;
	cout<<"value of y"<<y<<endl;
	
}

