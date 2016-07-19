//Friend function in c++
#include<iostream>
using namespace std;
class area_find{
	private:
		int length;
		int width;
	public:
		area_find():length(5) ,width(10)
		{
			cout<<"Program started : "<<"\t"<<length<<"\t"<<width;
		}
		int print_area()
		{
		int area  = length*width;
		return area;
		}
		friend void display(int temp);
};
void display(int temp)
{
	cout<<"\nThe value is " <<temp;
}
int main()
{
	area_find a1;
	int temp = a1.print_area();
	display(temp);
	}
