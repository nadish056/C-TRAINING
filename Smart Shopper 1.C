#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int b,x=0,y=0,z=0;
    float c;
   int c1,q1;
    int c2,q2;
    int c3,q3;
    int b1;
    scanf("%d %d",&c1,&q1);
     scanf("%d %d",&c2,&q2);
     scanf("%d %d",&c3,&q3);
     scanf("%d",&b1);
    
    x=c1*q1;
    y=c2*q2;
    z=c3*q3;  
    float a = x+y+z;
    b=a/10;
    c=a+b;
    
    printf("Total (Before Tax): %.2f\n",a);
    printf("Total (After Tax): %.2f\n",c);
    
    if(c<=b1)
        printf("Within Budget");
    else
        printf("Over Budget");
    return 0;
}
