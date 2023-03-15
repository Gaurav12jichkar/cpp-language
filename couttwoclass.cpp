#include<iostream>
using namespace std;
 
class hello1{
	public:
		static int count;
		hello1(){
			count++;
		}
	
};
class hello2{
	public:
			static int count1;
		hello2(){
			count1++;
		}
	
};
int hello1::count;
int hello2::count1;
int main()
{
	int n;
	hello1 h1,h2,h3;
	hello2 s1,s2;
	cout<<hello1::count;
	cout<<hello2::count1;
	
	n=hello1::count+hello2::count1;
//	cin>>n;
	cout<<"addition is"<<n;
}
