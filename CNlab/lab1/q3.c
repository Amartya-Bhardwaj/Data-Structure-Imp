#include<stdio.h>

void swap(int *x, int *y){
    int var = *x;
    *x = *y;
    *y = var;
}

int main(){
    int a , b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a: %d , b: %d",a,b);
    return 0;
}