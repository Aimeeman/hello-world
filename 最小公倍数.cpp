#include <stdio.h>
int main(){
	
	int m,n;
	int max,min;
	int k;
	printf("please input two numbers");
	scanf("%d %d",&m,&n);
	
	max = m >n? m : n;
	min = m <n? m : n;
	
	k = max;
	while (k % min !=0)
	{ 
	k +=max;
	 } 
	 
	 printf ("lowest common multiple is %d\n",k);
}
