#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("HESAP MAKINESI\n");
	
	int islem;
	float x,y;
	
	printf("1. Sayiyi Giriniz:"); scanf("%f",&x);
	printf("2. Sayiyi Giriniz:"); scanf("%f",&y);
	
	 printf("Lutfen Yapmak Istediginiz Islemi Seciniz : \n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n"); scanf("%d",&islem);
	 
	 if(islem == 1) {
	 	
	 printf("Sonuc : %f",x+y);
	 }
	 else if(islem == 2) {
	 	
	 printf("Sonuc : %f",x-y);
	 }
	else  if(islem == 3) {
	 	
	 printf("Sonuc : %f",x*y);
	 }
	 else if(islem == 4) {
	 	
	 printf("Sonuc : %f",x/y);
	 }
	 else {
	 	
	 printf("Hatali Islem Sectiniz.");
	 }
	return 0;
}
