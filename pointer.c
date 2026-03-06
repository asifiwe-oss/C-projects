#include <stdio.h>
int main(){
int value = 100;
int *point = &value;

//initialising pointer

int x = 5;

//pointer assignment

int i = 10;
int *p, *q;
p = &i;
q = p; 
printf("%d %d\n",*p, *q);

//but q = p != *q = *p
    return 0;
}