#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class teacher
{
		public:
			int i;
		int num;
		int id[23];
    	char name[23][34],city[23][34];
		string ab[20],pr[23],med[23],custom[23];
		
		
	
	void data()
	
	{  

	 cout<<setw(60)<<"STUDENT INFORMATION"<<endl;
		cout<<"enter  total number of student in your class"<<endl;
		cin>>num;
		for( i=1;i<=num;i++)
		{
			cout<<"enter id"<<endl;
				cin>>id[i];
				cout<<"enter name"<<endl;
				cin>>name[i];
				fflush(stdin);
				cout<<"enter city"<<endl;
				cin>>city[i];
			    cout<<"student is absent"<<endl;
                cin>>ab[i];
                cout<<"student is present"<<endl;
                cin>>pr[i];
                cout<<"student on medical leave"<<endl;
                cin>>med[i];
                cout<<"student on custom leave"<<endl;
                cin>>custom[i];
                
				cout<<"__________________________________________________"<<endl;
			
	}
	
	}
void first()
{
	cout<<"fist lecture attendance"<<endl;
	cout<<"time:10 am to 11 am"<<endl;
	

	data();
	
		
	cout<<setw(20)<<"studentid"<<setw(20)<<"absent"<<setw(20)<<"present"<<setw(20)<<"medical leave"<<setw(20)<<"custom leave"<<endl;
		for(int i=1;i<=num;i++)
		{
	cout<<setw(20)<<id[i]<<setw(20)<<ab[i]<<setw(20)<<pr[i]<<setw(20)<<med[i]<<setw(20)<<custom[i]<<endl;

		
}

	}			

void second()
{
	cout<<"second lecture attendance"<<endl;
	cout<<"time:11 am to 12 am"<<endl;
	data();
	cout<<setw(20)<<"studentid"<<setw(20)<<"absent"<<setw(20)<<"present"<<setw(20)<<"medical leave"<<setw(20)<<"custom leave"<<endl;
		for(int i=1;i<=num;i++)
		{
	cout<<setw(20)<<id[i]<<setw(20)<<ab[i]<<setw(20)<<pr[i]<<setw(20)<<med[i]<<setw(20)<<custom[i]<<endl;

	
}

	}			
void third()
{
	cout<<"third lecture attendance"<<endl;
	cout<<"time:12 am to 1 am"<<endl;
	data();
	cout<<setw(20)<<"studentid"<<setw(20)<<"absent"<<setw(20)<<"present"<<setw(20)<<"medical leave"<<setw(20)<<"custom leave"<<endl;
		for(int i=1;i<=num;i++)
		{
	cout<<setw(20)<<id[i]<<setw(20)<<ab[i]<<setw(20)<<pr[i]<<setw(20)<<med[i]<<setw(20)<<custom[i]<<endl;

	
}
}

void forth()
{
		cout<<"forth lecture attendance"<<endl;
	cout<<"time:1 pm to  2pm"<<endl;
	data();
	cout<<setw(20)<<"studentid"<<setw(20)<<"absent"<<setw(20)<<"present"<<setw(20)<<"medical leave"<<setw(20)<<"custom leave"<<endl;
		for(int i=1;i<=num;i++)
		{
	cout<<setw(20)<<id[i]<<setw(20)<<ab[i]<<setw(20)<<pr[i]<<setw(20)<<med[i]<<setw(20)<<custom[i]<<endl;

	
}
}
void option1()
{
	int option;
		go:
	cout<<"\n1.first lecture\n2.second lecture\n3.third lecture\n4.forth lecture"<<endl;
	
	cout<<"choose the option"<<endl;
	cin>>option;
	switch(option)
	{
		case 1:
		  first();
		  goto go;
		break;
		case 2:
			second();
			 goto go;
			break;
		case 3:
			third();
			 goto go;
			break;
		case 4:
			forth();
			 goto go;
			break;
			
	}
	
}

};
int main()
{
	teacher t1;
	
	cout<<setw(60)<<"STUDENT ATTENDANCE PROJECT"<<endl;
	cout<<"*****************************************************************************************************************"<<endl;
	cout<<"__________________________________________________________________________________________________________________"<<endl;
	t1.option1();
	

	
}
