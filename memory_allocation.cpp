//C++ memory management
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter n value : "<<endl;
	cin>>n;
	float *ptr;
	ptr = new float[n];
	cout<<"Enter elemnts : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>*(ptr+i);
	 } 
	 cout<<"Displaying Elements : "<<endl;
	 for(i=0;i<n;i++)
	 {
	 	cout<<"\t\n"<<*(ptr+i);
	 }
	 delete [] ptr;
	 return 0;
}
