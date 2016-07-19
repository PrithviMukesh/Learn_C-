//Inline function
/* C++ inline function is powerful concept that is commonly used with classes.
 If a function is inline, the compiler places a copy of the code of that function
  at each point where the function is called at compile time.

Any change to an inline function could require all clients of the function to be 
recompiled because compiler would need to replace all the code once again otherwise
 it will continue with old functionality.

To inline a function, place the keyword inline before the function name and define 
the function before any calls are made to the function. The compiler can ignore the
 inline qualifier in case defined function is more than a line. */


#include<iostream>
using namespace std;
inline int max(int x,int y)
{
	return (x>y) ? x:y;
}
int main()
{
	cout<<"Max(20,10) is : "<<max(20,10)<<endl; 
	cout<<"Max(1000,10) is : "<<max(100,10)<<endl;
	cout<<"Max(20,1000) is : "<<max(20,1000)<<endl;
	return 0;
}
