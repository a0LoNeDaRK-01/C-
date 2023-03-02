#include <stdio.h>
int main(){
	
int vize1,vize2,final;

float universiteortalamasi;

float dersort;

printf("1.vize:");
scanf("%d",&vize1);
printf("2.vize:");
scanf("%d",&vize2);
printf("final:");
scanf("%d",&final);	
printf("Universite ortalamaniz:");
scanf("%f",&universiteortalamasi );
dersort = (vize1*3/10+vize2*3/10+final*4/10);


 if (dersort>=90){
 
    
	printf("HARF NOTUNUZ - AA VE DERS ORTALAMANIZ: %f",dersort);
}	
	
 else if (dersort>=85 && dersort<90){
 	
 	printf("HARF NOTUNUZ - BA VE DERS ORTALAMANIZ: %f",dersort);
 	
 	
 }
  
 else if (dersort>=80 && dersort<85){
 	
 	printf("HARF NOTUNUZ - BB VE DERS ORTALAMANIZ: %f",dersort);
 	
 	
 }
  else if (dersort>=75 && dersort<80){
 	
 	printf("HARF NOTUNUZ - CB VE DERS ORTALAMANIZ: %f",dersort);
 	
 	
 }
  else if (dersort>=70 && dersort<75){
 	
printf("HARF NOTUNUZ - CC VE DERS ORTALAMANIZ: %f",dersort);
if (universiteortalamasi<2.5){
 printf("Ortalamaniz genel ortalamanin altinda.Dersi tekrardan almanizi tavsiye ederim.");
	}
 	
 }
  else if (dersort>=65 && dersort<70){
 	
 	printf("HARF NOTUNUZ - DC VE DERS ORTALAMANIZ: %f",dersort);
 	if (universiteortalamasi<2.5){
 			printf("Ortalamaniz genel ortalamanin altinda.Dersi tekrardan almanizi tavsiye ederim.");
		 }
 	
 }
  else if (dersort>=60 && dersort<65){
 	
 	printf("HARF NOTUNUZ - DD VE DERS ORTALAMANIZ: %f",dersort);
 	 
 	 if (universiteortalamasi<2.5){
 			printf("Ortalamaniz genel ortalamanin altinda.Dersi tekrardan almanizi tavsiye ederim.");
		 }
 	
 }
  else if (dersort>=55 && dersort<60){
 	
 	printf("HARF NOTUNUZ - DF VE DERS ORTALAMANIZ: %f",dersort);
 	
 	  if (universiteortalamasi<2.5){
 			printf("Ortalamaniz genel ortalamanin altinda.Dersi tekrardan almanizi tavsiye ederim.");
		 }
 	  
 	  
 }	
	
 else if (dersort>=50 && dersort<55){

   printf("HARF NOTUNUZ - FF VE DERS ORTALAMANIZ: %f\n",dersort);
 	
 printf("DERSTEN KALDINIZ");
 }	
		
return 0;	
}
