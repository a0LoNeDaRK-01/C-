#include <stdio.h>

#include <string.h>

char *dondur(char *money,int indeks) {
	
int uzunluk = strlen(money);
	
	if (indeks > uzunluk) {
		
		return NULL;
		
	}
	
	else {
		
		return money+indeks;
		
	}
	
}







int main() {
	
char dizi[] = "artificial intelligence";
	
	
char *money = dondur(dizi,0);

 if (money == NULL)	{
 	
 	printf("pointer NULL");
 	
 }
	else {
		
		printf("%s",money);
	}
	
	
	
	
}
