// Tek do�al say�n�n n terimlerini ve toplamlar�n� g�r�nt�lemek i�in C'de bir program yaz�n.
#include <stdio.h>
int main(){
	int a,b,fac=1,c;
	printf("Enter the number: \n");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		fac=fac*b;
	}
		
	printf("This is the number taken from factorial: %d\nFactorial: %d\n",a,fac);
	
	return 0;
}
