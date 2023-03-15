
#include<iostream>
 using namespace std;

int factorial (int n){
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
    }

    int main(){
        int factorial(int);
        int fact,value;
        cout<<"enter the value of n"<<endl;
        cin>>value;
        fact=factorial(value);
        cout<<"the factorial of n is "<<fact<<endl;
        return 0;
    }

