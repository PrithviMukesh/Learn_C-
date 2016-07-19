//virtual function 2 calculating area of circle and square:
#include<iostream>
using namespace std;
class base{
	public:
		int length;
		base(){
			cout<<"Constructor of base class : bass\n";
		}
	void get_length(){
		cout<<"Enter length : ";
		cin>>length;
	}
	virtual float area() = 0; //pure virtual function
};
class square : public base{
	public:
		square(){
			cout<<"Constructor od square class : square\n";
		}
		float area(){
			return length*length;
		}
};
class circle : public base{
	public:
		float area(){
			return 3.14*length*length;
		}
};
int main()
{
	square s1;
	s1.get_length();
	cout<<"Square area is : "<<s1.area();
	circle c1;
	c1.get_length();
	cout<<"Circle area is : "<<c1.area();
	return 0;
}
