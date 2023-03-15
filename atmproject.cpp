#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Bank{
	private:
		string name;
		int accountno;
		char address[20];
		int total;
		int mob;
		char city[9];
		float ammount[20];
		
		int d,w,pin,rpin,ab;
		
	public:
	void account_create()
	{ 
		cout<<setw(40)<<"ACCOUNT CREATION"<<endl;
		cout<<"Enter your name"<<name<<endl;
		cin>>name;
		fflush(stdin); 
		cout<<"Enter your address"<<address<<endl;
		cin>>address;
		fflush(stdin); 
		cout<<"Enter account no"<<accountno<<endl;
		cin>>accountno;
			fflush(stdin); 
		cout<<"Enter mobile no"<<mob<<endl;
		cin>>mob;	fflush(stdin); 
	cout<<"city"<<city<<endl;	
		cin>>city;
		cout<<"enter the ammount you want to diposite "<<total<<endl;
		cin>>total;
		
		cout<<"ACCOUNT IS CREATED SUCCESFULLY"<<endl;
		cout<<"_____________________________________________________________________________________________________"<<endl;
	}
	void deposite_cash()
	{
		cout<<setw(40)<<"**********************************CASH DEPOSITE*************************************************"<<endl;
		cout<<"enter the ammount you want deposite"<<d<<endl;
		cin>>d;
		
		total=total+d;
		cout<<"total ammount in your bank :-"<<total<<endl;
	
		
	}
	void cheak_bankrecord()
	{
		cout<<setw(40)<<"********************************CHEAK BANK STATEMENT*********************************************"<<endl;
		cout<<"Name:"<<endl<<fflush(stdin)<<name<<endl;
			
		cout<<"ADDRESS:"<<address<<endl;
		cout<<"ACCOUNT NO:"<<accountno<<endl;
		cout<<"MOBILE NO:"<<mob<<endl;
		cout<<"city:"<<city<<endl;
		cout<<"balance"<<total<<endl;
	}
	void widra_money()
	{  
	  
		cout<<setw(40)<<"*******************************CASH WITHDRWL************************************************************"<<endl;
		cout<<"enter the ammount you want to withdrwl"<<w<<endl;
		cin>>w;
		if(w>total)
		{
			cout<<"insuffiecient balence in your accout"<<endl;
		}
	else
	{
		total=total-w;
		cout<<"the available balance in your account is:"<<total<<endl;
		}	
		
	}
	void genrate_pin()
	{
		cout<<setw(40)<<"*******************************GENRATE PIN**************************************************************"<<endl;
		cout<<"Enter account no:"<<accountno<<endl;
		cin>>accountno;
		cout<<"enter 4 digit pin "<<pin<<endl;
		cin>>pin;
		cout<<"reenter 4 digit  pin"<<rpin<<endl;
		cin>>rpin;
		if(pin==rpin)
		{
			cout<<"CONGRATULATION!!!YOU GENRATE NEW PIN"<<endl;
		}
		else{
			cout<<"PLEASE CHEAK THE PIN ,AND RENTER"<<endl;
		}
	}
	
};
int main()
{
	
	Bank b1;
	int choice;

	cout<<"*************************************WELCOME TO GAURAV BANK**************************************************"<<endl;
		while(1)
	{
	
	cout<<"\n1.ACCOUNT OPPENNIG\n2.CASH DEPOSITE\n3.BANK STATEMENT\n4.CASH WITHDWAL\n5.PIN GENRATION\n6.EXIT"<<endl;
	cout<<"please enter the choice "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			b1.account_create();
		break;
		case 2:
		
		b1.deposite_cash();
		break;
		case 3:
		b1.cheak_bankrecord();
		break;
		case 4:
		b1.widra_money();
		break;
		case 5:
		b1.genrate_pin();
		break;
		case 6:
		exit(0);
		break;	
		default:
			cout<<"you enter wrong key!!!!please enter currect key"<<endl;
		}
	}
}


