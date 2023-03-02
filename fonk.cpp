#include <stdio.h>


	
	int carp(int matris[],int size) {
		
	int carpim = 1;
		
	int i = 0;
	
	for( ; i < size;i++){
		
		
		carpim *= matris[i];
		
		
		
	}
		
		
		
		return carpim; 
		
		

	}
	
	
	int main() {
		
		
	int sayilar[5] = {9,8,7,6,5};
	
	printf("%d",carp(sayilar,5));	
		
		
		
		
		
		
		
		
		
		
		
		
		
		

		
	}
