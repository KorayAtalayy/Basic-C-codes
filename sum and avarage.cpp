#include <stdio.h>
//Klavyeden 10 say� okumak ve toplamlar�n� ve ortalamalar�n� bulmak i�in C'de bir program yaz�n.
int main(){
	int a,b=0,c;
	for(a=0;a<10;a++){
		printf("Enter number: \n");
		scanf("%d",&c);
		b=b+c;
	}
	
	printf("Sum: %d\n ",b);
	int avarage=b/10;
	printf("Avarage: %d",avarage);
	
	return 0;
}
