#include <stdio.h>
#include <stdbool.h>

int main(void) {
  
    int n;
    bool is_Prime= true;
    printf("Enter a maximum number to Primes: \n");
    scanf("%d",&n);
    
    printf("Prime numbers:\n");    
    for(int i=2;i<= n;i++){
      is_Prime = true;
        int c=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
              is_Prime = false;
                c++;
            }
        }   
       if(c==2){
         //
            printf(" %d ",i);
        }
    }
  return 0;
}