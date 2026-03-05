#include <stdio.h>
    int func(int n){
        if(n == 1){
            return 1;
        }
        else {
            return 1 + func(n - 1);
        }
    }
    
int main(){
    printf("%d\n",func(4));
    return 0;
}