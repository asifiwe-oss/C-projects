#include <stdio.h>

int sum(int n, int a[]){
    int total = 0;
    for(int i = 0; i < n; i++){
     total += a[i];
    }
    return total;
}

int main(){
    int m;
    int array[100];
    
    printf("Enter number of elements: ");
    scanf("%d",&m);

    for(int i = 0; i < m; i++){
        printf("Enter array element [%d]: ",i);
        scanf("%d",&array[i]);
        
        }
     int length = sum(m,array);
        printf("Sum = %d",length);
               
        }