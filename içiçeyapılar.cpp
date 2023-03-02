#include <stdio.h>

#include <string.h>

struct Address {
	
	char mahalle[30];
	
	char cadde[30];
	
	char sokak[30];
	
};

struct ogrenci {
	
	char isim[30];
	
	char soyisim[30];
	
	int numara;
	
	int yas;
	
	struct Address adres;
		
};

int main() {
	
	struct ogrenci ogrenci1;
	
	strcpy(ogrenci1.isim,"Enes");
	
	strcpy(ogrenci1.soyisim,"YALCIN");
	
	ogrenci1.numara = 144;
	
	ogrenci1.yas = 19;
	
	strcpy(ogrenci1.adres.mahalle,"Gurselpasa");
	
		strcpy(ogrenci1.adres.cadde,"Ali Bozdogan");
	
		strcpy(ogrenci1.adres.sokak,"75003");
	
	printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);
	
	return 0;
}
