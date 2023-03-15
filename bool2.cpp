// C++ program to demonstrate
// bool data type
#include <iostream>
using namespace std;

// Driver code
int main()
{
int x1 = 10, x2 = 20, m = 2;
bool b1, b2;
	
// false
b1 = x1 == x2;

// true
b2 = x1 < x2;

cout << "Bool1 is = " <<
		b1 << "\n";
cout << "Bool2 is = " <<
		b2 << "\n";
bool b3 = false;

if (b3)
	cout << "Yes" << "\n";
else
	cout << "No" << "\n";

int x3 = false + 5 * m - b3;
cout << x3;

return 0;
}

