#include <stdio.h>

int main(){
	
	int a,b,i,gcd;
	printf("����������������");
	scanf("%d %d",&a,b);
	
	for (i=1;i<=a &&i<=b;++i)
	{
		if (a%i==0&&b%i==0)
		gcd = i;
		
	}
	if (gcd==1) 
	{
		printf("%d��%d����",a,b);
		 
	}
	else
	{
		printf("%d��%d������",a,b);
			}
	return 0;
	 
}
