//Construtor and class example
#include<iostream>
using namespace std;
class area{
	private:
		int length;
		int height;
	public:
		area():length(5),height(10)
		{
			cout<<"The value started and assigned : "<<length<<height<<endl;
		}
		area(int length,int height):length(length),height(height)
		{
			cout<<"The default values";
		}
		~area();
		void get_Length();
		double area_Calculation();
		void display(int temp);
};
void area::get_Length()
{
	cout<<"Enter the length and height respectively : ";
	cin>>length>>height;
}
double area::area_Calculation()
{
	return height*length;
}
void area::display(int temp)
{
	cout<<"Value is temp : "<<temp;
}
area::~area()
{
	cout<<"\nprogram completed\n";
}
int main()
{
	area a1,a2(10,15);
	int temp;
	a1.get_Length();
	temp = a1.area_Calculation();
	cout<<temp;
	temp = a2.area_Calculation();
	a2.display(temp);
	return 0;
}
