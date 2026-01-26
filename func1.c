#include <stdio.h>

// Outputting the sum


//   int add(int a, int b){
//     return a + b;
//   }
// int main(){
//     int result = add(4,5);
//     printf("Sum = %d\n",result);


//Void function


// void greet(){
//     printf("Hello, Asifiwe!\n");
// }

// int main(){
//   greet();


//Greeting user


// void greetUser(char name[]){
//     printf("Hello %s\n",name);
//     printf("I study at Rwanda Coding Academy");
// }

// int main(){

//     greetUser("Mucyo");



//Printing sum of even numbers to n


// int even(int n){
//     int sum = 0;
//     for(int i = 2; i <= n; i += 2){
//         sum += i;
//     }
//     return sum;
// }

// int main(){

//     int final = even(20);
//       printf("%d\n",final);



// void greet(){
//     printf("Welcome to C programming\n");
// }
// int main(){
//     greet();


//Void functions(Even numbers printing)


// void evenNumbers(int n){
//     for(int i = 0; i <= n; i += 2){
//         printf("%d ",i);
//     }
// }

// int main(){
//     evenNumbers(20);

//  int square(int x){
//     return x*x;
//  }

//  int main(){
//     printf("%d",square(89));


//Returns average


// int average(int a, int b){
//     return (a + b)/2;
// }

// int main(){
//    int media = average(84,64);
//    printf("Average =%d ",media);


// int maximum(int a, int b){
//     if(a > b){
//       printf("a is greater than b");
//     }
//     else{
//         printf("b is greater than a");
//     }
// }

// int main(){

//     int max = maximum(748,784);
//     printf("%s",max);


//Printing factorial

// int factorial(int n){
//     int product = 1;
//     for(int i = 1; i <= n; i++){
//         product *= i;
//     }
//     return product;
// }

// int main(){
//   int fact = factorial(6);
//   printf("%d",fact);


//Returns x power y


// int pow(int base, int exponet){
   
// }
//   int result = pow(4,3);

 void myFunction(){
int a = 5;
char c = 'a';
int A[5] = {1,2,3,4,5};
float r = 3.14;
printf("a = %d\n c = %c\n r = %f\n",a,c,r);
  for(int i = 0; i < 5; i++){
    printf("%d",A[i]);
  }
}
  int main(){
    a = 7;
    c = 'B';
    myFunction()
   return 0;
}