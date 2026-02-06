#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,base;
    int result=1;
    
    scanf("%d %d",&base,&n);
    for(int i=1;i<=n;i++){
        result = result * base;
    }
    printf("%d",result);
}
