#include<stdio.h>

void add(int *n){
    *n = *n + 500;
    printf("%d", *n);
}


int main(){
    int num;
    scanf("%d",&num);
    add(&num);
    return 0;
}