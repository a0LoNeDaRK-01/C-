#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	cout<<"HESAP MAKINESI\n";
	
	int islem;
	float x,y;
	
	cout<<"1. Sayiyi Giriniz:"; cin>>x;
	cout<<"2. Sayiyi Giriniz:"; cin>>y;
	
	 cout<<"Lutfen Yapmak Istediginiz Islemi Seciniz : \n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n"; cin>>islem;
	 
	 switch(islem) {
	
	 case(1):  {
	 	
	 cout<<"Sonuc : "<<x+y<<endl;
	 break;
	 }
	 case(2):  {
	 	
	 cout<<"Sonuc : "<<x-y<<endl;
	 break;
	 }
	 case(3): {
	 	
	 cout<<"Sonuc : "<<x*y<<endl;
	 break;
	 }
	 case(4): {
	 	
	 cout<<"Sonuc : "<<x/y<<endl;
	 break;
	 }
	 default: {
	 	
	 cout<<"Hatali Islem Sectiniz.";
	 } 
	 }
	return 0;
}
