#include<stdio.h>
#include<string.h>
#include<math.h>
 
int main (void)
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(fabs(a-b)<0.00001)
    {
        printf("yes");
    }
    else
    printf("no");
    return 0;
}

