#include<stdio.h>
int main(){
	int i,j,v,a,b,c,d,sum,multi,p=0,q=0,m=0,he=0,x=0;
	for(i=100;i<10001;i++){
		for(j=2;j<i;j++){
		if(i%j==0){
			p=0;
			break;
		} 
		else{
			p++;
		}
		}
		if(p!=0){
			a=i/1000;
			b=i/100-a*10;
			c=i/10-a*100-b*10;
			d=i%10;
			sum=a+b+c+d;
			multi=a*a+b*b+c*c+d*d;
			for(v=2;v<sum;v++){
				if(sum%v==0){
					q=0;
					break;
				}
				else
				q++;
			}
			for(v=2;v<multi;v++){
				if(multi%v==0){
					m=0;
					break;
				}
				else
				m++;
			}
			if(q!=0&&m!=0){
				printf("%d\n",i);
				he+=i;
				x++;
			}
		}
		p=0;
	}
	printf("%d",he/x);
	return 0;
}
