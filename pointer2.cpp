#include <stdio.h>
/*
int main() {
	
	int a = 444444,*ap;
	
	float b = 4.4,*bp;
	
	double c = 7.893,*cp;
	
	char d = 'a',*dp;
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *arrayp;
	
	ap = &a;
	
	bp = &b;
	
	cp = &c;
	
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%p adresindeki int in degeri %d dir.\n",ap,*ap);
	
	printf("%p adresindeki float in degeri %.1f dir.\n",bp,*bp);
	
	printf("%p adresindeki double in degeri %.3lf dir.\n",cp,*cp);
	
	printf("%p adresindeki char in degeri %c dir.\n",dp,*dp);
	
	printf("%p adresindeki sayilarin elemaninin degeri %d dir.\n",arrayp,*arrayp);
	
	
	
	
	
	
	
	
	return 0;
	
}
*/

int main() {
	
	int i,j = 1;
	
	int *jp1,*jp2 = &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp1 + i;
	
	printf( "i = %d\nj = %d\n*jp1 = %d\n*jp2 = %d\n " , i , j , *jp1 , *jp2 );
	
	
	
	
	
	
	
	
	
	return 0;
}









