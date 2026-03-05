// 1 Printing **


#include <stdio.h>
#include <string.h>


// int character( int n);
// int main(){
//     int n;
//     printf("Enter the number of characters:");
//     scanf("%d",&n);
//     int output = character(7);
//     printf("%d",output);    
// }
// int character(int n){
//     for(int i = 1; i <= n; i++){
//       printf("*");
//      }
//      printf("\n");
//      return n;
// }



// int func(int n);
// void func1(int sum);

// int main(){
//     int n;
//     printf("Enter integer n:");
//     scanf("%d",&n);
//     int sum = func(n);
//     printf("Sum = %d\n",sum);
//     func1(sum);
// }

// int func(int n){
//     int add = 0;
//     for(int i = 1; i <= n; i++){
//         add += i;
//     }
//     return add;
// }

// void func1(int sum){
//     if(sum % 2 == 0){
//         printf("Sum is an even number");
//     }
//     else{
//         printf("Sum is an odd number");
//     }
// }


// int func(int n,int array[100]);
// void func1(int max);

// int main(){
//   int n;
//   int i;
//   int array[100];
//   printf("Enter the length of the array: ");
//   scanf("%d",&n);
//   for(int i = 0; i < n; i++){
//   printf("Enter array element [%d]: ",i);
//   scanf("%d",&array[i]);
//   }
//   int maximum = func(n,array);
//   printf("Maximum = %d\n",maximum);
//   func1(maximum);

// }

// int func(int n,int array[100]){
//   int max = array[0];
//   for(int i = 0; i < n; i++){
//     if( array[i] > max){
//         max = array[i];
//     }
//   }
//   return max;
//   }

//  void func1(int max){
//     if(max > 0){
//         printf("The maximum number is positive");
//     }
//     else if(max < 0){
//         printf("The maximum number is negative");
//     }
//     else {
//         printf("The maximum number is 0");
//     }
//  } 
 

int func(char name[50]);
void func1(int size);

int main(){
    char name[50];
    printf("Enter the string: ");

    fgets(name,50,stdin);
    int length = func(name);
    printf("Size = %d\n",length);
    func1(length);
}
int func(char name[]){
      int count = 0;
      while (name[count] != '\0' && name[count] != '\n')
      {
        count ++;
      }
      return count;               

}

void func1(int size){
    if( size % 2 == 0){
        printf("It is an even number");
    }
    else{
        printf("It is an odd number");
    }
}

    