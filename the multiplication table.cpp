#include <stdio.h> //Belirli bir tamsayýnýn çarpma tablosunu görüntülemek için C'de bir program yazýn.
int main(){
	int a,b,c;
	printf("Enter the number that you want: ");
	scanf("%d",&a);
	 printf("     The Multiplication Table: \n");
	
	for(b=0;b<11;b++)
	printf("%d  *  %d  =  %d\n",a,b,a*b);
	
	return 0;
}
