#include<stdio.h>
#include<string.h>
int main(){
	char a[20],r[20];
	int b,count=0,i,c;
	printf("Enter a string:");
	scanf("%s",&a);
	b=strlen(a);
	c=b;
	for(i=0;i<b;i++){
		r[i]=a[c-1];
		c--;
	}
	printf("The reverse of %s is:%s",a,r);
	return 0;
}
