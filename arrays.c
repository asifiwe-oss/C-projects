#include <stdio.h>
int main(){
//Operation between matrices

//Addition


// int A[4][4],B[4][4],C[4][4];

// for(int i = 0; i < 4; i++){
//     for(int k = 0; k < 4; k++){
//         printf("Enter array components [%d][%d]",i,k);
//         scanf("%d",&A[i][k]);
//     }
// }

// for(int i = 0; i < 4; i++){
//     for(int k = 0; k < 4; k++){
//         printf("Enter array components [%d][%d]",i,k);
//         scanf("%d",&B[i][k]);
//     }
// }

// for(int i = 0; i < 4; i++){
//     for(int k = 0; k < 4; k++){
//         C[i][k] = B[i][k] + C[i][k];
//     }
// }


// for(int i = 0; i < 4; i++){
//     for(int k = 0; k < 4; k++){
//         printf(" Sum = %d",C[i][k]);
//     }
// printf("\n");
// }


//Multiplication





//Pascals triangle


int n;
printf("Enter number of rows: ");
scanf("%d",&n);

int triangle[n][n];
triangle[0][0] = 1;

for(int i = 1; i < n; i++){
    triangle[i][0] = 1;
    for(int j = 1; j < i; j++){
        triangle[i][j] = triangle[i - n][j - 1] + triangle[i - 1][j];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d",triangle[i][j]);
        }
        printf("\n");
    }
}



//

    return 0;
}