#include<iostream>
using namespace std;
class stu{
	public:
	static	int count;
		
	stu()
	{
		cout<<"hello"<<endl;
		count++;
	}
};
int stu::count=0;
int main()
{
	
	stu s1,s2,s3,s4;
	
	cout<<stu::count;
}
