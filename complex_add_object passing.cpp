//Passing objects in function in class
#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int imag;
	public:
		complex():real(0),imag(0)
		{
			cout<<"Program is started : with real value = "<<real<<"imaginary = "<<imag<<endl;
		}
		void Read()
		{
			cout<<"Enter real and Imag part"<<endl;
			cin>>real>>imag;
		}
		void add(complex comp1,complex comp2)
		{
			real = comp1.real+comp2.real;
			imag  = comp1.imag+comp2.imag;
		}
		void display()
		{
			cout<<"Sum is "<<real<<"real value "<<imag<<"Imaginary value\n"<<endl;
		}
};
int main()
{
	complex c1;
	c1.Read();
	complex c2;
	c2.Read();
	complex c3;
	c3.add(c1,c2);
	c3.display();
	return 0;
	}
