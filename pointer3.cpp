#include <stdio.h>

#include <string.h>

int benimstrlen(char *p) {
	
	int uzunluk = 0;
	
	int i = 0;
	
	for( ; p[i] != '\0';i++) {
		
		uzunluk++;
		
	}
	
	return uzunluk;
		
}

int main() {
	
	char wonk[5] = "know";
	
	/*
	char *p = wonk;
	
	printf("%s",wonk+1%1);
	
	*/
	
	printf("%d",benimstrlen(wonk));
	
	return 0;
	
}
