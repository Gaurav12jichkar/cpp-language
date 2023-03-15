#include<iostream>
using namespace std;
int main()
{
	int add(int);
	int result=add(3);
	cout<<result;
}
int add(int k)
{
	if(k>0){
		return k+add(k-1);
	}
	else{
		return 0;
	}
}
