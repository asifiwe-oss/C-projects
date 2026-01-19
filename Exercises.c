#include<stdio.h>
#include <string.h>
int main(){

    //Reverse an array

    // int array[100];
    // int i;
    // int n;
    // scanf("%d",&n);
    // for(int i = 0; i < n; i++ ){
    // printf("Enter array[%d]: ",i+1);
    // scanf("%d",&array[i]);}

    // for(int i = n-1; i >= 0; i-- ){
    //     printf("%d\n",array[i]);
    // }

    //Copying elements of an array

    int n;
    int array1[100];
    printf("Input number of elements: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("Elements - %d: ",&i){
            scanf("%d",&array1[i]);
        }
    }
    printf("Elements stored in the first array are: \n");
    for(int i = 0; i < n; i++){
        printf("%d\n",array1[i]);
    }

    int array2[100];
    int array = strcmp(array2,array1);

    printf("Elements stored in the second array are: \n");

    int array2[100];
    strcpy(array2,array1);

    printf("%d\n",array2);


    //Removes elements that comes more than once in array


    //Shows number of times elements occured in an array

    return 0;
}