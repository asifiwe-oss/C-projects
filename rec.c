#include <stdio.h>

//Some of non-negative numbers from 0 to n

int sum(int n);

int main(){
    
    printf("%d",sum(4));
}

int sum(int n) {
   if (n == 0){
    return 0;
   }
   return n + sum(n - 1);
}
