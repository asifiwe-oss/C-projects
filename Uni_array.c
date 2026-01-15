#include <stdio.h>

int main(){

// One-dimensional arrays

// 1.Reversing array input by the user

// int numbers[5];
// int i;
// for(i = 0; i <= 4; i++){
// printf("Enter numbers %d: ", i + 1);
// scanf("%d",&numbers[i]);
// }
// printf("Numbers in reverse order:\n");
// for(i = 4; i >= 0; i--){
//     printf("%d\n",numbers[i]);
// }

//Sum of elements in array

// int elements[5];
// int x;
// int sum = 0;
// for(x = 0; x <= 4; x++){
//     printf("Enter element of array %d:",x + 1);
//     scanf("%d",&elements[x]);
//     sum += elements[x];
// }
//         printf(" Sum of elements = %d\n",sum);

// Find largest number of the array

int large[5];
int n;
for(n = 0; n <= 4; n++){
    printf("Enter number%d:", n + 1);
    scanf("%d",&large[n]);    
}

int max = large[0];

for(n = 0; n <= 4; n++){
     if(large[n] > max){
     max = large[n];}
}
 printf("The largest of the five numbers is: ",j);

return 0;
}


