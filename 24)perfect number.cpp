#include<stdio.h>  
int main()  
{  
int i = 1, num, Sum = 0;  
printf(" Enter any number to check Perfect Number:");  
scanf("%d", &num);  
while(i < num )  
   {  
        if(num % i == 0)  
        Sum = Sum + i;  
        i++;                         
   }  
    if(Sum == num)  
        printf("%d is Perfect Number", num);  
    else  
        printf("%d is not a Perfect Number", num);  
 return 0;
}
