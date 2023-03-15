
#include<iostream>
using namespace std;
// aggregation

class Address{
	public:
		string addressl,city,state;
		Address(string addressl,string city,string state){
			
			this->addressl=addressl;
			this->city=city;
			this->state=state;
		}
		
};

class Employee{
	private:
		Address* address;
		public:
			int id;
			string name;
			Employee(int id,string name,Address* address){
				this->id=id;
				this->name=name;
				this->address=address;
				
			}
			void print(){
				
				cout<<id<<" "<<name<<" "<<address->addressl<<" "<<address->city<<" "<<address->state<<endl;
			}
			
			
};

int main(){
	Address a1=Address("Colony-3","Nagpur","MAharashtra");
	
	Employee e1=Employee(101,"Radheshyam",&a1);
	e1.print();
	
}

