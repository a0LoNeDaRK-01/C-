#include <iostream>
using namespace std;
int i;
int f1();

int main() {
	
	double i = 3.14;
	:: i = f1();
	cout<<i<<" "<<::i<<"\n"<<endl;
	
	return 0;
	

}
int f1() {
	
	char i = '*';
	
	::i = 7 ;
	
	cout<<i<<" "<<::i<<"\n";
	
	return ::i;
}
