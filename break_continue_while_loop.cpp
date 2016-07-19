//Example of break and continue
#include<iostream>
using namespace std;
int main()
{
	int number,sum = 0,i,n;
	cout<<"Enter the no of items to add : ";
	cin>>n;
	cout<<"\nEnter the n elements to add : "<<endl;
	while(n>=1)
	{
		cout<<"Element : "<<n<<" : ";
		cin>>number;
		if(number <= 0)
		{
			break;
		}
		else
		{
			sum += number;
		}
		n--;
	}
	cout<<"Total sum is : "<<sum<<endl;
	return 0;
}
