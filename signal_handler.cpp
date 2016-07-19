//signal handler in c++
#include<iostream>
#include<csignal>
using namespace std;
void signalhandler(int signum){
	cout<<"Interrupt signal ("<<signum<<") is received\n";
	exit(1);
}
int main(){
	int i=0;
	signal(SIGINT, signalhandler);
	while(1){
		cout<<"Going to sleep :\n";
		
		if(i==3){
		raise(SIGINT);
		}
		
		sleep(1);
	}
	return 0;
}
