#include<iostream>
#include<conio.h>
#include<iomanip>
#include<dos.h>
#include<stdlib.h>
using namespace std;
class registration{

 	
 	public:
 		void res()
 		{
 			string name,city,address,bg;
 			int age;
 			string	ui,pass,repass;
 			int reg,log;
 			
 		cout<<"REGISTRATION"<<endl;
 		cout<<"enter your name"<<name<<endl;
 		cin>>name;
 		cout<<"your age"<<age<<endl;
 		cin>>age;
 		cout<<"enter city"<<city<<endl;
 		cin>>city;
 		cout<<"blood group"<<bg<<endl;
 		cin>>bg;
 		cout<<"enter the userid"<<ui<<endl;
 		cin>>ui;
 		cout<<"enter the password"<<pass<<endl;
 		cin>>pass;
 		cout<<"reenter the password"<<endl;
 		cin>>repass;
 		if(pass==repass)
 		{
		 
 		cout<<"YOUR REGISTRATION IS SUCCESFULL "<<endl;
 		
 	}
 	else
 	{
 		cout<<"pls enter currect password"<<endl;
	 }
 			
		 }
		 
 };
 class login :public registration
 {
 	public:
 	int logg(r1.res())
 		
	 string u,p;
 cout<<setw(60)<<"LOGIN"<<endl;	
 cout<<"enter the user id"<<u<<endl;
 
 cin>>u;
 cout<<"enter the password"<<p<<endl;
 cin>>p;
 if(strcmp(ui,u) && (pass,p))
 {
 	cout<<"sucessfully login"<<endl;
}
else
{
	cout<<"please enter the currect id and password"<<endl;
}

}
};
 int main()
 {
 	
 	int option,d1;
 	cout<<setw(90)<<"####WELCOME TO DOCTOR APPLICATION####"<<endl;
 	cout<<"_____________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(28)<<"choose what you want"<<endl;
    cout<<"\n1.doctor \n2. patient \n3.admin"<<endl;
    cout<<"************************************************************************************************************************************************"<<endl;
    cout<<"option"<<endl;
    cin>>option;
    switch(option)
	{
    	case 1:
    		cout<<setw(90)<<"\n\nDOCTOR"<<endl;
    		cout<<"1.registration                 2.login"<<endl;
    		cout<<"enter what doctor want"<<endl;
    		cin>>d1;
    		switch(d1)
			{
    			case 1:
    				cout<<"PLEASE REGISTER YOURSELF"<<endl;
    				registration r1;
    				r1.res();
    				
    			case 2:
				cout<<"please login yourself"<<endl;
				login l1;
				l1.logg();	
    				
    			}
    		}
    	}
