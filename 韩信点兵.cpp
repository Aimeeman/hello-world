#include<stdio.h>
int main(){
	int i,a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(i=10;i<101;i++){
		if(a==i%3&&b==i%5&&c==i%7){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
