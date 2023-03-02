#include <stdio.h>

struct Student {
	
	char isim[20];
	
	char soyisim[20];
	
	int numara;
	
	int yas;

};

int main() {
	
	struct Student ceren = {"Ceren","Buga",144,18};
	
	printf("%s %s %d %d",ceren.isim,ceren.soyisim,ceren.numara,ceren.yas);
	
	return 0;
}
