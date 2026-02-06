#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a>c)
        printf("%d is the greatest",a);
    else if(b > c && b>a)
        printf("%d is the greatest",b);
    else if(c > a&& c>b)
        printf("%d is the greatest",c);
    else
        printf("There is a tie for the greatest number");
    return 0;
}
