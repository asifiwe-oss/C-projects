#include <stdio.h>

int areaRect(int l, int w){
    int area;
    for(int i = 1; i <= w; i++){
        area += l;
    }
    return area;
}
int main(){
  int area = areaRect(5,4);
  printf("The area of the rectangle is %d\n",area);
    return 0;
}