//Operator overloading in c++
#include<iostream>
using namespace std;
class temp{
	int count;
	public:
		temp():count(5)
		{
			cout<<"Started as "<<count<<"\n";
		}
		void operator --()
		{
			while(count != 0)
			{
				count -= 1;
				cout<<"\n"<<count<<"\n";
			}
				
		}
		void display()
		{
			cout<<"Count value is : "<<count;
		}
};
int main()
{
	temp t;
	--t;//making operator overloading object
	t.display();
	return 0;
	}
