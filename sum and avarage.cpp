#include <stdio.h>
//Klavyeden 10 sayý okumak ve toplamlarýný ve ortalamalarýný bulmak için C'de bir program yazýn.
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
