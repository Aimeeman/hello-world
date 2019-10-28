#include <stdio.h>
int main(){
	int  m , a , b , c ;
	
	printf("输入旅行社的人数：");
	scanf("%d",&m);
	 
	
	printf("输入会英语的人数：");
	scanf("%d",&a);
	
	printf("输入会俄语的人数：");
	scanf("%d",&b);
	
	printf("输入两样都不会的人数：");
	scanf("%d",&c);
	
	int n ;
	n=a+b-m+c;
	
	printf("输出两样都会的人数：");
	printf("%d",n);
	return 0; 
}
