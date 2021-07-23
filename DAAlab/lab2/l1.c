#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("Before Swapping a: %d, b: %d, c: %d\n",a,b,c);
    swap(&a,&b);
    swap(&b,&c);
    printf("After swapping a: %d, b: %d, c: %d",a,b,c);
    return 0;
}