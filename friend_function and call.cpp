//frien class example accessing private variable
#include<iostream>
using namespace std;
class B;
class A{
	private:
		int meter;
	public:
		A():meter(5)
		{
			cout<<"constructor called from A : \n";
		}
		friend int func(A a1,B b1);
};
class B{
	private:
		int meter;
	public:
		B():meter(10)
		{
			cout<<"Constructor of b and i am called : "<<endl;
		}
		friend int func(A a1,B b1);
};
int func(A a1,B b1){
	a1.meter = 100;
	b1.meter = 10;
	cout<<a1.meter<<"\n"<<b1.meter;
}
int main ()
{
	A a;
	B b;
	func(a,b);
	return 0;
}

