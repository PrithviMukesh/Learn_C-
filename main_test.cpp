//main checking example
#include <iostream>
using namespace std;

int main()
{
	int *ptr1,len=10;
	//ptr1 = new int;
	ptr1 = &len;
	
	cout<<*ptr1<<"\n";
}
