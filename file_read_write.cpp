//File read and write in c++
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char data[100];
	ofstream outstream;
	outstream.open("D:\\summer\\Placement c++ prepare\\files\\read_write.txt");
	cout<<"Enter the data : ";
	cin.getline(data, 100);
	//write data
	outstream<<data<<endl;
	cout<<"\nEnter the age : ";
	cin>>data;
	cin.ignore();
	//write data
	outstream<<data<<endl;
	outstream.close();
	ifstream instream;
	instream>>data;
	cout<<"\n"<<data;
	instream>>data;
	cout<<"\n"<<data;
	instream.close();
	return 0;
	
	
}
