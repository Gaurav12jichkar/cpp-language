
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
char un[20],pw[15],p[10],u[15];
int age;
long mnumb;
class Registration{
	protected:
		int apt;
	public:
		void login(){
		              	cout<<"**********************************************************************************************************\n";
						cout<<setw(70)<<"LOGIN PORTAL \n\n\n";
						cout<<"**********************************************************************************************************\n";
			            cout<<"\nENTER USERNAME : ";
        	            cin>>un;
           	            cout<<"\nENTER PASSWORD : ";
          	            cin>>pw;
          	
			if(strcmp(u,un)==0 && strcmp(p,pw)==0){
            city();
                	}
           	else
	             cout<<"\nWRONG PASSWORD...PLEASE RE-ENTER YOUR PASSWORD: ";
	       	}
	    void signup(){
	    	            cout<<"**********************************************************************************************************\n";
						cout<<setw(70)<<"REGISTRATION PORTAL \n\n\n" <<endl;
						cout<<"**********************************************************************************************************\n";
	    	            cout<<"\nCREATE YOUR USERNAME : ";
        	            cin>>u;
                     	cout<<"\nCREATE YOUR PASSWORD : ";
          	            cin>>p;
          	long n1;
          	            cout<<"\nENTER MOBILE NO. : "<<endl;
          	            cin>>mnumb;
          	int age;
                       	cout<<"\nENTER AGE : "<<endl;
          	            cin>>age;
                      	cout<<"\nREGISTRATION COMPLETED SUCCESFULLY\n\n"<<endl;
		}
		void city(){
			     int c1;
			            cout<<"PLEASE SELECT YOUR CITY : "<<endl;
			            cout<<setw(20)<<"\n 1.CHANDRAPUR \n 2.NAGPUR \n 3.WARDHA \n 4.AMRAVATI \n 5.MUMBAI "<<endl;
			            cin>>c1;
			switch (c1){
				
				case 1:
					int ct1;
					       cout<<"\n 1.PHYSICIAN \n 2.CARDIOLOGIST \n 3.NEUROLOGIST \n 4.PHYSIOTHERAPIST"<<endl;
					       cout<<"\nSELECT SPECIALISTS : ";
					        cin>>ct1;
					switch(ct1){
						case 1:
						case 2:
						case 3:
						case 4:
							int dr;
							     cout<<"\nDOCTORS IN CHANDRAPUR"<<endl;
							     cout<<"\n 1.Dr.VISHWAS ZADE \n 2.Dr. ROHAN AINCHWAR  \n 3.Dr. AJAY MEHRA \n 4.Dr. NEHA KULKARNI"<<endl;
							     cin>>dr;
							switch(dr){
								case 1:
									cout<<"Dr.VISHWAS ZADE \n(M.B.B.S) & (M.D) \nTiming : 10am to 8pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr. ROHAN AINCHWAR \n(M.B.B.S) & (M.D) \nTiming : 10am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr. AJAY MEHRA \n(M.B.B.S)  \nTim : 11am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr. NEHA KULKARNI \n(M.B.B.S) \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"PLEASE SELECT AGAIN"<<endl;
							break;
					}
					break;
				case 2:
					int ct2;
					            cout<<"\n 1.PHYSICIAN \n 2.CARDIOLOGIST \n 3.NEUROLOGIST \n 4.PHYSIOTHERAPIST"<<endl;
					            cout<<"\nSELECT SPECIALISTS : ";
					            cin>>ct2;
					switch(ct2){
						case 1:
						case 2:
						case 3:
						case 4:
							int dr;
							cout<<"\nDOCTORS IN NAGPUR"<<endl;
							cout<<"\n 1.Dr. VINOD ADBE\n 2.Dr. MANISH JUNEJA\n 3.Dr. TUSHAR PATIL\n 4.Dr. ANKUSH BISWAS"<<endl;
							cin>>dr;
							switch(dr){
								case 1:
									cout<<"Dr. VINOD ADBE \n(M.B.B.S) & (M.D) \n Timing : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr. MANISH JUNEJA \n(M.B.B.S) & (M.D) \nTime : 10am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr. TUSHAR PATIL \n(M.B.B.S)  \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr. ANKUSH BISWAS \n(M.B.B.S)  \nTime : 12am to 12pm "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"PLEASE SELECT AGAIN "<<endl;
							break;
					}
					break;
				case 3:
					int ct3;
					            cout<<"\n 1.PHYSICIAN \n 2.CARDIOLOGIST \n 3.NEUROLOGIST \n 4.PHYSIOTHERAPIST"<<endl;
					            cout<<"\nSELECT SPECIALISTS : ";
					cin>>ct3;
					switch(ct3){
						case 1:
						case 2:
						case 3:
						case 4:
							int doc;
							cout<<"\nDOCTORS IN WARDHA"<<endl;
							cout<<"\n 1.Dr. ASHWIN KAMBLE \n 2.Dr. ASHISH RAHATE \n 3.Dr. VEENA TILOKANI \n 4.Dr. AAYUSHI DHANKHE"<<endl;
							cin>>doc;
							switch(doc){
								case 1:
									cout<<"Dr. ASHWIN KAMBLE\n(M.B.B.S) & (M.D) \nTime : 10am to 7pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr. ASHISH RAHATE \n(M.B.B.S) & (M.D) \nTime : 10am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr. VEENA TILOKANI \n(M.B.B.S) \nTime : 11am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr. AAYUSHI DHANKHE \n(M.B.B.S) \nTime : 12pm to 12am "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"PLEASE SELECT AGAIN"<<endl;
							break;
					}
					break;
				case 4:
			    	int ct4;
				            cout<<"\n 1.PHYSICIAN \n 2.CARDIOLOGIST \n 3.NEUROLOGIST \n 4.PHYSIOTHERAPIST"<<endl;
					        cout<<"\nSELECT SPECIALISTS : ";
					        cin>>ct4;
					switch(ct4){
						case 1:
						case 2:
						case 3:
						case 4:
							int dr;
							cout<<"\nDOCTORS IN AMRAVATI"<<endl;
							cout<<"\n1.Dr. KHUSHI SARDARE \n2.Dr. NIKHIL BHAGAT \n3.Dr. PRATIK KHOBRAGADE \n4.Dr. AYUSH DESHMUKH"<<endl;
							cin>>dr;
							switch(dr){
								case 1:
									cout<<"Dr.KHUSHI SARDARE  \n(M.B.B.S) & (M.D) \nTime : 10am to 10:30pm"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr. NIKHIL BHAGAT \n(M.B.B.S) & (M.D) \nTime : 10am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr. PRATIK KHOBRAGADE \n(M.B.B.S)  \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr. AYUSH DESHMUKH \n(M.B.B.S) \nTime : 12pm to 12am "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"PLEASE SELECT AGAIN"<<endl;
							break;
							
					}
					break;
				case 5:
					int ct5;
				            cout<<"\n 1.PHYSICIAN \n 2.CARDIOLOGIST \n 3.NEUROLOGIST \n 4.PHYSIOTHERAPIST"<<endl;
					        cout<<"\nSELECT SPECIALISTS : ";
					            cin>>ct5;
					switch(ct5){
						case 1:
						case 2:
						case 3:
						case 4:
							int dr;
							cout<<"\nDOCTORS IN MUMBAI"<<endl;
							cout<<"\n 1.Dr.PRAGATI PATIL\n 2.Dr.UTKARSHA SATHE\n 3.Dr.ANUSHKA SAKHARKAR\n 4.Dr.VASAVI BEERA"<<endl;
							cin>>dr;
							switch(dr){
								case 1:
									cout<<"Dr.PRAGATI PATIL\n(M.B.B.S) & (M.D) \nTime : 10am to 12am"<<endl;
									appointment();
									break;
								case 2:
									cout<<"Dr.UTKARSHA SATHE \n(M.B.B.S) & (M.D) \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 3:
									cout<<"Dr.ANUSHKA SAKHARKAR \n(M.B.B.S) \nTime : 9am to 10pm "<<endl;
									appointment();
									break;
								case 4:
									cout<<"Dr.VASAVI BEERA \n(M.B.B.S)  \nTime : 12pm to 12am "<<endl;
									appointment();
									break;
							}
							break;
						default:
							cout<<"PLEASE SELECT AGAIN"<<endl;
							break;
							
					}
					break;
		}
	}
		void appointment(){
	                		cout<<setw(90)<<"\n\n\n APPOINTMENT PAGE \n\n\n"<<endl;
			                cout<<" SELECT YOUR APPOINTMENT "<<endl;
		                  	cout<<"\n\n1.APPOINTMENT \n2.MEETING \n3. HOME VISIT \n";
			                cin>>apt;
			switch(apt){
				case 1:
					mai();
					cout<<"APPOINTMENT BOOKED SUCCESSFULLY";
					break;
				case 2:
					mai();
					cout<<"YOUR MEETING HAS BEEN BOOKED SUCCESSFULLY";
					break;
				case 3:
					mai();
					cout<<"HOME VISIT REQUEST ACCEPTED SUCCESSFULLY";
					break;
			}
		}
		void mai();
};
    void Registration::mai(){
		char name[30],mno[10],add[30];
					int tm;
                 	cout<<"\n\n\n\nENTER NAME : "<<endl;
                 	cin.ignore();
                	cin.getline(name,20);
	                cout<<"\n\n\n\nENTER MOBILE NO. : "<<endl;
	                cin.ignore();
	                cin.getline(mno,10);
	                cout<<"\n\n\n\nENTER TIME : "<<endl;
	                cin>>tm;
					cout<<"\n\n\n\nADDRESS : "<<endl;
					cin.ignore();
					cin.getline(add,30);
}
class Doctor{
	protected:
		int reg;
		char us[8],pass[8],add[30],name[20],catg[20],ur[8],psw[8];
		
	public:
		void signup(){
			cout<<setw(70)<<"REGISTRATION PORTAL\n\n\n" <<endl;
			cout<<"\nENTER FULLNAME : ";
			cin.ignore();
			cin.getline(name,20);
	    	cout<<"\nCREATE USERNAME : ";
        	cin>>us;
           	cout<<"\nCREATE YOUR PASSWORD : ";
          	cin>>pass;
          	cout<<"\nENTER LOCATION : ";
          	cin.ignore();
          	cin.getline(add,30);
          	cout<<"\nENTER REGIS.NO : ";
          	cin>>reg;
          	cout<<"\nDOCTOR'S SPECIALIZATION : ";
          	cin.ignore();
			cin.getline(catg,20);
          	
          	cout<<setw(30)<<"REGISTRATION DONE SUCCESSFULLY\n\n\n"<<endl;
		}
		void login(){
			cout<<setw(70)<<"<<< DOCTOR'S LOGIN >>>\n\n";
			cout<<"\nENTER YOUR USERNAME :";
        	cin>>ur;
           	cout<<"\nENTER YOUR PASSWORD :";
          	cin>>psw;
          	
			if(strcmp(ur,us)==0 && strcmp(psw,pass)==0){
            	cout<<"\n\n<<<  WELCOME TO DREAMCITY HOSPITAL  >>>'\n";
            	ayush:
            	    cout<<"\n\n1.SHOW PROFILE "<<setw(40)<<"2.SHOW APPOINTMENTS"<<setw(40)<<"3.EDIT PROFILE "<<setw(40)<<"4.EXIT"<<"\n\n";
                	int f1;
                	cin>>f1;
                	switch(f1){
            	    	case 1:
            	    		showpro();
            	    		goto ayush;
            	    		break;
                		case 2:
            	    		showapp();
            	    		goto ayush;
            	    		break;
            	    	case 3:
            	    		edit();
            	    		goto ayush;
            	    		break;
            	    	case 4 :
		                    exit(0);
		                    
            	    	default:
            		    	cout<<"PLEASE SELECT AGAIN\n";
            			
				}
                	}
           	else
	             cout<<" PLEASE RE-ENTER YOUR PASSWORD ";
	       	}
	    void showpro(){
	    	cout<<"\nDR "<<name<<"\n(M.B.B.S) & (M.D) \n"<<catg<<"\nLocation: "<<add<<endl;
		}
		void edit(){
			cout<<"<< EDIT PROFILE >>"<<endl;
			cout<<"\nUPDATE PROFILE : ";
			char catg1[20], loc[10];
			int time;
			cin.ignore();
			cin.getline(catg1,20);
			cout<<"\nCHANGE TIME : ";
			cin>>time;
			cout<<"\nCHANGE LOCATION : ";
			cin>>loc;
		}
		void showapp(){
			cout<<"\n\n BOOKED APPOINTMENTS "<<endl;
			cout<<"\n1.Mr.Anant Deshmukh  \n   AT 11AM\n\n";
			cout<<"\n1.Mr.Sunil Kotnake  \n   AT 1PM";
			cout<<"\n1.Mrs. Rajshree Khobragade  \n   AT 3PM";
			cout<<"\n1.Mrs.Smita Deshmukh  \n   AT 4PM";
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

int main(){
	cout<<setw(70)<<"*******************************************\n";
	cout<<setw(68)<<"<<<   WELCOME TO DREAMCITY HOSPITAL   >>>" <<endl;
	cout<<setw(70)<<"*******************************************\n";
	   cat:
	   	int a;
	   	cout<<"-------------------------------------------------------------------------------------------------------------";
		cout<<"\n\nARE YOU PATIENT OR DOCTOR OR ADMIN ?\n"<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------";
    	cout<<"\n1.PATIENT "<<setw(40)<<"2.DOCTOR  "<<setw(40)<<"3.ADMIN "<<endl;
    	cout<<"*************************************************************************************************************\n";
    	cout<<"\nENTER YOUR CHOICE : ";
    	cin>>a;
    	switch (a){
    		
		case 1:
			
			cout<<"************************************************************************************************************";
			cout<<"\n                                 <<  PATIENTS PAGE  >>                    \n\n\n"<<endl;
			cout<<"************************************************************************************************************";
			cout<<"\n1.REGISTER  \n2.LOGIN "<<endl;
			cout<<"************************************************************************************************************";
			int pat;
			cin>>pat;
			switch(pat){
				case 1:
					Registration q;
					q.signup();
					goto cat;
				case 2:
					q.login();
					goto cat;
			}
		    
			break;
		case 2:
			cout<<"************************************************************************************************************";
			cout<<"\n                                  <<  DOCTORS PAGE  >>                           "<<endl;
			cout<<"************************************************************************************************************";
			cout<<"\n1.REGISTER  \n2.LOGIN "<<endl;
			cout<<"************************************************************************************************************";
			int doc;
			cin>>doc;
			switch(doc){
				case 1:
					Doctor d;
					d.signup();
					goto cat;
				case 2:
					d.login();
					goto cat;
			}
			break;
		case 3:
			cout<<"\n    << ADMIN'S PAGE >>     "<<endl;
			Admin a;
			a.admin();
			goto cat;
		default:
			cout<<"PLEASE ENTER CORRECTLY "<<endl;
			goto cat;
	}
	return 0;
	
}
