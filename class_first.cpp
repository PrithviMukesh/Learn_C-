//C++ classess and objects example wth codes
#include<iostream>
using namespace std;
class my_first_class 
{
	private:
		int i,j;
	public:
		float f1,k=2;
	void temp_func(int i1)
	{
		i = i1;
		cout<<"You entered (Int variable): "<<i<<endl;
	}
	void temp_func2(float f)
	{
		f1 = f;
		cout<<"Float variale value is : "<<f1<<endl;
	}
};

int main()
{
	my_first_class m1,m2;
	int k = m1.k;
	cout<<k<<endl;
	m1.temp_func(20);
	m1.temp_func2(12.2);
	m2.k;
	m2.temp_func(20);
	m2.temp_func2(12.2);
	return 0;
}
