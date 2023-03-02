#include <stdio.h>



void bastir(int matrisimiz[][3],int size) {
	
	int i,j;
	
	for(i = 0;i < size;i++) {
		
		for(j = 0;j < 3;j++) {
	
		
		printf("%d ",matrisimiz[i][j]);
		
		
	}

	printf("\n");
	
}


}


   int main() {
 
   int matris[3][3];
   
   int i,j;
   
   
   
   
   printf("Matrisi Doldurunuz:");
   
   
   for(i = 0;i < 3;i++) {
   	
   for(j = 0; j < 3;j++) {
   		
   		
   	scanf("%d",&matris[i][j]);
   	
   		
   		
        }
   	
   	
    }
   
   bastir(matris,3);
   
   
   return 0;
   }
