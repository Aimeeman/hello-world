#include<stdio.h>
int main(){
	int a[5],i,j,temp,b;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	b=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
	printf("%d",b);
	return 0;
}
