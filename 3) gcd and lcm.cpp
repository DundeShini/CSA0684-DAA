#include<stdio.h>
int main()
{
	int n1,n2,i,gcd=0;
	printf("Enter 1st number:");
	scanf("%d",&n1);
	printf("Enter 2nd number:");
	scanf("%d",&n2);
	for(i=1;i<=n1 && i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
    }
printf("\nThe Gcd of 2 Numbers is:%d",gcd);
printf("\nThe lcm of 2 Numbers is:%d",((n1*n2)/gcd));
}
