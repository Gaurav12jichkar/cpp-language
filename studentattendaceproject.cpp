#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class student_attendance{
	private:
		char name[20];
		char city[10];
		int rollno=0;
		int month=0;
		int present=0;
		int n;
	
		
		public:
			void student_details()
			{
				cout<<"no of student in class"<<endl;
				cin>>n;
				for(int i=0;i<n;i++)
				{
				
				cout<<setw(50)<<"STUDENT DETAILS"<<endl;
				cout<<"Enter the rollno of student"<<endl;
				cin>>rollno;
				
				cout<<"Enter student name"<<endl;
				cin>>name;
			fflush(stdin);
				cout<<"Enter city mame"<<endl;
				cin>>city;
				cout<<"choose month that you want to cheak:"<<endl;
				cin>> month;
					
				
				switch(month)
				{
					case 1:
					   int ad,j;
					   
						cout<<setw(60)<<"JAN"<<endl;
						cout<<"total working days:-20"<<endl;
						cin>>j;
			           cout<<"absent days:-"<<endl;
						cin>>ad;
						present=j-ad;
						cout<<"student present days:-"<<present<<endl;
						break;
					case 2:
						int ad1,fi;
						cout<<setw(60)<<"FEB"<<endl;
						cout<<"total working days:22"<<endl;
						cin>>fi;
			            cout<<"absent days:-"<<endl;
						cin>>ad1;
						present=fi-ad1;
						cout<<"student present days:-"<<present<<endl;
						break;
					case 3:
						int ad2,march;
							cout<<setw(60)<<"MARCH"<<endl;
						cout<<"total working days:22"<<endl;
						cin>>march;
			            cout<<"absent days:-"<<endl;
						cin>>ad2;
						present=march-ad2;
						cout<<"student present days:-"<<present<<endl;
						break;
					case 4:
							int ad3,april;
								cout<<setw(60)<<"april"<<endl;
						cout<<"total working days:26"<<endl;
						cin>>april;
			            cout<<"absent days:-"<<endl;
						cin>>ad3;
						present=april-ad3;
						cout<<"student present days:-"<<present<<endl;
						break;
					case 5:
							cout<<setw(60)<<"may"<<endl;
						cout<<"SUMMER HOLIDAY"<<endl;
						break;
						
					case 6:
						int ad4,june;
								cout<<setw(60)<<"JUNE"<<endl;
						cout<<"total working days:4"<<endl;
						cin>>june;
			            cout<<"absent days:-"<<endl;
						cin>>ad4;
						present=april-ad4;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 7:int ad5,july;
								cout<<setw(60)<<"JULY"<<endl;
						cout<<"total working days:28"<<endl;
						cin>>july;
			            cout<<"absent days:-"<<endl;
						cin>>ad5;
						present=july-ad5;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 8:int ad6,august;
								cout<<setw(60)<<"AUGUST"<<endl;
						cout<<"total working days:20"<<endl;
						cin>>august;
			            cout<<"absent days:-"<<endl;
						cin>>ad6;
						present=august-ad6;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 9:
					int ad7,september;
								cout<<setw(60)<<"september"<<endl;
						cout<<"total working days:"<<endl;
						cin>>september;
			            cout<<"absent days:-"<<endl;
						cin>>ad7;
						present=september-ad7;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 10:
					int ad8,octomber;
								cout<<setw(60)<<"octomber"<<endl;
						cout<<"total working days:25"<<endl;
						cin>>octomber;
			            cout<<"absent days:-"<<endl;
						cin>>ad8;
						present=octomber-ad8;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 11:int ad9,novmber;
								cout<<setw(60)<<"novomber"<<endl;
						cout<<"total working days:25"<<endl;
						cin>>novmber;
			            cout<<"absent days:-"<<endl;
						cin>>ad9;
						present=novmber-ad9;
						cout<<"student present days:-"<<present<<endl;
						break;
				case 12:		
						int ad10,december;
								cout<<setw(60)<<"december"<<endl;
						cout<<"total working days:25"<<endl;
						cin>>december;
			            cout<<"absent days:-"<<endl;
						cin>>ad10;
						present=december-ad10;
						cout<<"student present days:-"<<present<<endl;
						break;
				}
			}
			}
			
};
int main()
{
student_attendance s1;
s1.student_details();
	
}
