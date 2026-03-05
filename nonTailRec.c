//The recursive called is not the last

#include<stdio.h>

void fun(int n){
   if(n == 0)
   return;
 fun(n -1);
 printf("%d",n);
}
int main(){
  fun(3);
  return 0;
}