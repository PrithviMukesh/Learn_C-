//goto example in c++
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i=10,j;
	char str[10] = "prithvi";
	char str1[10] = "mukesh";
	cout<<str<<endl;
	strcat(str,str1);
	cout<<" "<<str;

	if(i==10)
	{
		goto label;
	}
	label:
		cout<<"\nthis is label";
			return 0;
}
