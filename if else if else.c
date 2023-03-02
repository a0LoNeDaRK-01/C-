#include <stdio.h>
int main(){
	
	
int vize1,vize2,final;
 float dersort;
 
 float ortalama;
 
    printf("1.vize notunuzu giriniz:");
    scanf("%d",&vize1);
    printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);	
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	printf("Üniversite ortalamanýzý giriniz:");
	scanf("%f",&ortalama);
	
	dersort = (vize1+vize2+final) / 3.0;
	
	if (dersort>60)	
	printf("DERSTEN GECTINIZ.");
	

	
	else if (dersort>50) {
	
	printf("BUTE KALDINIZ.");
	
		if (ortalama<2.5){
		
			printf("BUTU GEÇSEN BILE DERSI SENEYE DE ALMANI TAVSIYE EDERIM.CUNKU UNIVERSITE ORTALAMAN GENEL ORTALAMANIN ALTINDA");
	
    }

	
 }

	else {
	
	printf("DERSTEN KALDINIZ.");
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

