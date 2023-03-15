#include<iostream>
using namespace std;
class vehicles{
	public:
		
			void B(){
			
			cout<<"Bikes"<<endl;
		}
		void c()
		{
		
			cout<<"cars"<<endl;
		}
		void bu(){
		
			cout<<"buses"<<endl;
		}
		void t(){
		
			cout<<"trucks"<<endl;
		}
		
};
class bikes:public vehicles
{
	public:
	

		void pe()
		{
		
		cout<<"pedal bikes"<<endl;
	}
	void mo()
	{
	
		cout<<"motor bike"<<endl;
	}
	
};
class cars:public vehicles
{
	public:
 
 	void pic(){
	 
 cout<<"pickup"<<endl;
}
void sp()
{

 cout<<"sports cars"<<endl;
}
void va(){

 cout<<"vans"<<endl;
}
void es(){

 cout<<	"estate cars"<<endl;
}
 
};
class buses:public vehicles
{ public:
	void bu(){
		cout<<"buses"<<endl;
	}
};
class trucks:public vehicles
{
public:
void  me(){
	cout<<"medium trucks"<<endl;
	
}
void he()
{
	cout<<"heavy  trucks"<<endl;
	}	
};
int main()
{
vehicles v1;
v1.B();
}














