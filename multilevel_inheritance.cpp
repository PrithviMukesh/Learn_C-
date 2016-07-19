//Multilevel Inheritance in c++
#include<iostream>
using namespace std;
class prithvi{
	public:
		string p = "Prithvi";
		void print_first_name(){
			cout<<"My first name is : "<<p<<endl;
		}
};
class mukesh : public prithvi{
	public :
		string p1 = "Mukesh";
		void print_last_name(){
			cout<<"My last name is : "<<p1<<endl;
		}
};
class fullname:public mukesh{
	public:
		fullname(){
			cout<<"Constructor called that means my full name gonna print here : "<<endl;
		}
		
};
int main()
{
	fullname f1;
	f1.print_first_name();
	f1.print_last_name();
	return 0;
}
