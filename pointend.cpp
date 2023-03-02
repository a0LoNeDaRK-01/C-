#include <stdio.h>

char *gunismi(char *gundizisi[],int uzunluk,int hangigun) {
	
	
	if(hangigun >= 1 && hangigun <= 7) {
		
		
		return gundizisi[hangigun - 1];
		
    	}
	
	else {
		
		return NULL;
		
    	}
    	
 }

int main() {
	
char *gunler[7] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};

char *enes = gunismi(gunler,7,4);

if (enes == NULL) {
	
	printf("NULL");
	
 }
	
 else {
 	
 	printf("%s",enes);
 	
 }
		
	return 0;
}
