#include<iostream>
#include<conio.h>
#include<iomanip>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//patient registration
class registration
{
protected:
		char ui[15],pass[15],u[15],p[15];
 	int apt;
 	public:
 		void res()
 		{
 			string name,city,bg;
 			int age;
 			string	repass;
 		
 			
 		cout<<setw(60)<<"REGISTRATION"<<endl;
 		cout<<"enter your name"<<name<<endl;
 		cin>>name;
 		fflush(stdin);
 		cout<<"your age"<<age<<endl;
 		cin>>age;
 		cout<<"enter city"<<city<<endl;
 		cin>>city;
 		cout<<"blood group"<<bg<<endl;
 		cin>>bg;
 		cout<<"enter the userid"<<ui<<endl;
 		cin>>ui;
 		back:
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
 		goto back;
	 }
 	}

		 

 	void logg()
	 
 		{
		 
f:	
 cout<<setw(60)<<"LOGIN"<<endl;	
 cout<<"enter the user id"<<endl;
 
 cin>>u;
 cout<<"enter the password"<<endl;
 cin>>p;
 
 if ((strcmp(u,ui)==0) && strcmp(pass,p)==0)
 {
 	cout<<"login is succesful"<<endl;
 	
 	cout<<"book an appointment with doctor";
 	
}
 else
 {
 	cout<<"pls enter currect password"<<endl;
 	goto f;
 }
}


void appointment(){ 
	                		cout<<setw(90)<<"\n\n\n APPOINTMENT PAGE \n\n\n"<<endl;
			                cout<<" SELECT YOUR APPOINTMENT "<<endl;
		                  	cout<<"\n\n1.APPOINTMENT \n2.MEETING \n3. HOME VISIT \n";
			                cin>>apt;
			switch(apt){
				case 1:
					
					cout<<"APPOINTMENT BOOKED SUCCESSFULLY";
					break;
				case 2:
					
					cout<<"YOUR MEETING HAS BEEN BOOKED SUCCESSFULLY";
					break;
				case 3:
					
					cout<<"HOME VISIT REQUEST ACCEPTED SUCCESSFULLY";
					break;
}
}
void city()
{  lala:
	lala1:
	cout<<"\n 1.nagpur\n2.pune\n3.mumbai"<<endl;
 	int city;
 	
 	cout<<"city choice"<<endl;
 	cin>> city;
 	int aap,app1,app2,time;
 	switch(city){
 		case 1:
 			cout<<"NAGPUR"<<endl;
 			
 			cout<<"1.rahul mehta\n2.vicky sanu\n3.viju shrama"<<endl;
 			cout<<"select the doctor you want choose for appoinment"<<endl;
 		
 			cin>>aap;
 			switch (aap){
 				case 1:
 				
 					cout<<"MR.RAHUL MEHTA\n age:30\nmbbs genral phision\nnagpur"<<endl;
 						cout<<"time:10 to 3"<<time<<endl;
 						appointment();
 				
 				
 				break 	;
 					goto lala;
 					case 2:
 						cout<<"MR.VICKY SANU \nage:46\n mmbs orto.\n nagpur"<<endl;
 						cout<<"time:10 to 5"<<endl;
 						appointment();
 					
 						break;
 							goto lala;
 						
 						case 3:
 							cout<<"MR.VIJU SHARMA \nage: 50\nmbbs gynacologist\n nagpur"<<endl;
 							cout<<"time:11 to 5"<<time<<endl;
 							appointment();
 					
 						break;
 							goto lala;
			 }
			 goto lala1;
 		case 2:
 			cout<<"PUNE"<<endl;
 			cout<<"1. gaurav mehta\n2.kunal sanu\n3.viju shrama"<<endl;
 			cout<<"select the doctor you want choose for appoinment"<<endl;
 		
 			cin>>aap;
 			switch (aap){
 				case 1:
 				
 					cout<<"MR.gaurav MEHTA\n age:30\nmbbs genral phision\npune"<<endl;
 						cout<<"time :11 to 6"<<endl;
 						appointment();
 					
 					
 				
 				break 	;
 					goto lala;
 					case 2:
 						cout<<"MR.kunal SANU \nage:46\n mmbs orto.\n pune"<<endl;
 						cout<<"time:11 to 5"<<time<<endl;
 						appointment();
 					
 						break;
 							goto lala;	
 						case 3:
 							cout<<"MR.VIJU SHARMA \nage: 50\nmbbs gynacologist\n pune"<<endl;
 							cout<<"time:11 to 4"<<endl;
 					
 					appointment();
 						break;
 							goto lala;
			 }
			 goto lala1;
			 
 		case 3:
		 cout<<"MUMBAI"<<endl;
		 cout<<"1. kantilal\n2.ramrahim\n3. shramaji"<<endl;
 			cout<<"select the doctor you want choose for appoinment"<<endl;
 		
 			cin>>aap;
 			switch (aap){
 				case 1:
 				
 					cout<<"MR.kantilal\n age:30\nmbbs genral phision\nmumbai"<<endl;
 						cout<<"time:11 to 5"<<endl;
 				appointment();
 				
 				break 	;
 					goto lala;
 					
 					case 2:
 						cout<<"MR.rahimlal \nage:46\n mmbs orto.\n mumbai"<<endl;
 						cout<<"time:10 to 4pm"<<endl;
 					appointment();
 						
 						break;
 							goto lala;
 						case 3:
 							cout<<"MR.sharamji \nage: 50\nmbbs gynacologist\n mumbai"<<endl;
 							cout<<"time:11 am to 5pm"<<endl;
 						
 						appointment();
 						break;
 						goto lala;
			 }
			 
		goto lala1;
	 }
}
		

};
class doctor{
	protected:
		char ui[15],pass[15],u[15],p[15];
 	
 	public:
 			string name,city,bg,q;
 			int age;
 			string	repass;
 		
 		void res()
 		{
 		
 			
 		cout<<setw(60)<<"WELCOME TO DOCTOR REGISTRATION"<<endl;
 		cout<<"enter your name"<<name<<endl;
 		cin>>name;
 		fflush(stdin);
 		cout<<"your age"<<age<<endl;
 		cin>>age;
 		cout<<"qualification"<<q<<endl;
 		cin>>q;
 		fflush(stdin);
 		cout<<"enter the userid"<<ui<<endl;
 		cin>>ui;
 		back1:
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
 		goto back1;
	 }
 	}

		 

 	void logg()
	 
 		{
		 
f:
	int op1;
 cout<<setw(60)<<"DOCTOR LOGIN"<<endl;	
 cout<<"enter the user id"<<endl;
 
 cin>>u;
 cout<<"enter the password"<<endl;
 cin>>p;
 
 if ((strcmp(u,ui)==0) && strcmp(pass,p)==0)
 {
 	cout<<"login is succesful"<<endl;
 	cout<<"\n1.show profile \n2.show all appointment"<<endl;
 	cout<<"choose option"<<endl;
 	cin>>op1;
 	switch(op1)
 	{
 		case 1:
 			cout<<"1.show profile "<<endl;
 			cout<<"name:-"<<name<<endl;
 			cout<<"age:-"<<age<<endl;
 			cout<<"Qualification:-"<<q<<endl;
 				fflush(stdin);
 			break;
 			case 2:
 				cout<<"2.SHOW APPOINMENT"<<endl;
 				cout<<"";
	 }
 	
 }
 else
 {
 	cout<<"pls enter currect password"<<endl;
 	goto f;
 }
}


 	

	
};
class Admin{
	protected:
		int code,f2;
	public:
		void admin(){
			cout<<"\n\nENTER ADMIN'S PRIVATE CODE :\n";
			cin>>code;
			cout<<setw(45)<<"\n<< ADMIN'S PAGE >>\n"<<endl;
			cout<<" \n 1.ADD CITIES/LOCATIONS \n 2.PATIENT'S REGISTRATION \n 3.DOCTOR'S REGISTRATION \n 4.PATIENT'S LIST\n 5.DOCTOR'S LIST \n\n";
			cin>>f2;
			switch(f2){
				case 1:
					char city[20];
					cout<<"\nENTER CITY : ";
					cin.ignore();
		        	cin.getline(city,20);
					cout<<"\nENTER PINCODE  : ";
					int pin;
					cin>>pin;
					break;
				case 2:
					char name[10];
					cout<<"\nENTER PATIENT'S NAME : ";
					cin>>name;
					cout<<"\nAPPOINTMENT TIME  : ";
					int alf;
					cin>>alf;
					break;
				case 3:
					char na[10];
					cout<<"\nENTER DOCTOR'S NAME : ";
					cin>>na;
					cout<<"\nENTER ID  : ";
					int pi;
					cin>>pi;
					break;
				case 4:
					cout<<"\n<< PATIENT'S LIST >>"<<endl;
					cout<<"\n1.Mr.Anant Deshmukh  \n   AT 11AM\n\n";
			        cout<<"\n1.Mr.Sunil Kotnake  \n   AT 1PM";
		        	cout<<"\n1.Mrs. Rajshree Khobragade  \n   AT 3PM";
		        	cout<<"\n1.Mrs.Smita Deshmukh  \n   AT 4PM";
					break;
				case 5:
					cout<<"<< OUR DOCTORS >>"<<endl;
					cout<<"\n 1.Dr. AAYUSHI DHANKHE\n 2.Dr. PAYAL KUTTARMARE\n 3.Dr. KOMAL SINGH\n 4.Dr. KHUSHI SARDARE"<<endl;
					break;
					
					
			}
		}
};

	
 int main()
 {
 registration r1;
 
 doctor d2;
 
 	int option,d1;
 	cout<<setw(90)<<"####WELCOME TO DOCTOR APPLICATION####"<<endl;
 	cout<<"_____________________________________________________________________________________________________________________________________________"<<endl;
    cout<<setw(28)<<"select any option you want"<<endl;
      neww:
    cout<<"\n1.patient \n2.doctor \n3.admin \n4.exit"<<endl;
    cout<<"************************************************************************************************************************************************"<<endl;
  cat:
    cout<<"option"<<endl;
    cin>>option;
    switch(option)
	{
    	case 1:
    		cout<<setw(90)<<"\nPATIENT"<<endl;
    		cout<<"1.registration                 2.login"<<endl;
    		cout<<"enter what patient want"<<endl;
    		cin>>d1;
    		switch(d1)
			{
    			case 1:
    				cout<<"PLEASE REGISTER YOURSELF"<<endl;
    				
    				r1.res();
    			goto neww;
    				
    				
    			case 2:
				cout<<"PLEASE LOGIN	"<<endl;

				r1.logg();
				r1.city();
				r1.appointment();
				
				
				goto neww;
				}
				
			case 2:
				cout<<setw(60)<<"DOCTOR"<<endl;
				cout<<setw(90)<<"\n\n"<<endl;
				cout<<"1.registration     2.login"<<endl;
				int p1;
				cout<<"enter what patient"<<endl;
				cin>>p1;
				cc:
				switch(p1)
				{
					case 1:
    				cout<<"PLEASE REGISTER YOURSELF"<<endl;
    				
    				d2.res();
    				
    			case 2:
				cout<<"PLEASE LOGIN	"<<endl;
				d2.logg();
			
				
				
				
			
				
				goto neww;
					
				}
			case 3:
			cout<<"\n    << ADMIN'S PAGE >>     "<<endl;
			Admin a;
			a.admin();
			goto cat;
		default:
			cout<<"PLEASE ENTER CORRECTLY "<<endl;
			goto cat;	
      
}

}




 
