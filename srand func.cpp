//Example4.c  
 
#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
 
int main()  
{  
 
    int i,max,min;  
 
    printf("Enter Min value => ");  
    scanf("%d",&min);  
    printf("Enter Max value => ");  
    scanf("%d",&max);  
     
    if(min>max)  
    {  
        printf("Min value is greater than max value\n");  
        return 0;  
    }  

    srand(time(NULL));  
     
 
    printf("10 Random Numbers between %d and %d=>\n",min,max);    
     
    for(i=0;i<10;i++)  
    {  
         printf("%d ",(rand() % (max - min +1)) + min);  
    }   
     
    
    printf("\n");  
    return 0;  
}
