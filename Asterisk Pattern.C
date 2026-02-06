
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        for(j=1;j<=n;j++){
         
            if(i == j || i+j==n+1 || i==(n+1)/2 || j==(n+1)/2  ){
        
                printf("* ");
            }
            else{
                printf("  ");
            }
      
        }    printf("\n");  
    }
  return 0;  
}
