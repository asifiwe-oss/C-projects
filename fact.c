#include <stdio.h>

int fact(int n);

int main(){
  printf("Factorial of 5 is %d ",fact(5));
}

int fact(int n){
   if(n == 1){
    return 1;
   }
   return n * fact(n - 1);
}