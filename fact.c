#include <stdio.h>
int main() {
	
	
int n;

int fact = 1;	

printf("Faktoriyel almak istediginiz sayiyi giriniz.");

scanf("%d\n",&n);
	
while(n != 0){

fact = fact*n;

n--;	
		
}	

printf("%d\n",fact);
		
return 0;
	
}
