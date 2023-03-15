#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("C:/Users/Admin/Desktop/testout2.txt");  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to Cubitechnology.\n";  
    filestream << "C++ and C.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  
