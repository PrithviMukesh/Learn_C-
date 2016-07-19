//Multiple Inheritance and also function overriding
#include<iostream>
using namespace std;
class area{
	public:
		area()
		{
			cout<<"Area class is called : "<<endl;
		}
		float area_calc(float l,float h){
			return (l*h)/2;
		}
};
class peri{
	public:
		peri(){
			cout<<"perimeter function called : "<<endl;
		}
		float peri_calc(float l,float h){
			return l*h;
		}
};
class rectangle : public area , public peri{
	public:
		int height,length;
		rectangle():length(0.0),height(0.0)
		{
			cout<<"Rectangle gonna call the same file as base : "<<endl;
			}
		void get_details(){
			cout<<"Enter length and height respectively : "<<endl;
			cin>>length>>height;
		}
		float area_calc(){
			return length*height;
		}
		float peri_calc(){
			return length/height;
		}
		
};
int main()
{
	rectangle r1;
	area a1;
	r1.get_details();
	cout<<"The area is : "<<r1.area_calc();
	cout<<"The perimeter is : "<<r1.peri_calc();//function overriding
	cout<<"The perimeter is : "<<a1.area_calc(12,12);
	return 0;
}
