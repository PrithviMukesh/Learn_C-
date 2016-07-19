//Example of copy constructor
#include<iostream>
using namespace std;
class copy_cons{
	private :
		int a,b;
	public:
		copy_cons()
		{
			a = 5;
			b = 6;
			cout<<"This is costructor\n";
		}
		copy_cons(copy_cons &p)
		{
			a++;
			b++;
			a = p.a;
			b = p.b;
			cout<<"This is copy_costructor";
		}
		void display()
		{
			cout<<"A and B value is \t"<<a<<"\t"<<b;
		}
};
int main()
{
	copy_cons c1;
	c1.display();
	return 0;
}

