#include <stdio.h>

int main(){
	
	int a,b,i,gcd;
	printf("输入两个正整数：");
	scanf("%d %d",&a,b);
	
	for (i=1;i<=a &&i<=b;++i)
	{
		if (a%i==0&&b%i==0)
		gcd = i;
		
	}
	if (gcd==1) 
	{
		printf("%d和%d互质",a,b);
		 
	}
	else
	{
		printf("%d和%d不互质",a,b);
			}
	return 0;
	 
}
