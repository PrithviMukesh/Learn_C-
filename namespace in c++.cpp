//namespace in c++
#include<iostream>
using namespace std;

namespace first_space{
	void func(){
		cout<<"my first name space : Prithvi\n";
	}
}
namespace second_space{
	void func(){
		cout<<"my second name space : Mukesh\n";
	}
}
int main(){
	first_space::func();
	second_space::func();
	return 0;
}
