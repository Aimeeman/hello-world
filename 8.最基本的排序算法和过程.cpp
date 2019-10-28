#include <stdio.h>
int main() {
  int x[3] = {5, 2, 1}, i ,m;
  while(1) {
  scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(i=0;i<2;i++) {

        if( x[i] > x[i+1]) {

  	    int temp = x[i];

  	    x[i] = x[i+1];

  	    x[i+1] = temp;
  	    
      }
    for(i=0;i<2;i++) {
       if( x[i] > x[i+1]){
       	int m = x[i];
       	x[i] = x[i+1];
       	x[i+1] = m;
	   }	
	} 

      i = i + 1;

      i = i - 1;



    }



    printf(" %d, %d, %d", x[0], x[1], x[2]);



  }



  return 0;



}
