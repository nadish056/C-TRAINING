#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c)
    {
        printf("Equilateral Triangle");
    }
    else 
        printf("Not a valid triangle");

    
    return 0;
}
