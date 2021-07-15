#include<stdio.h>

void add(int n){
    n = n + 300;
    printf("%d", n);
}

int main(){
    int num = 50;
    add(num);
    printf("\nvalue not changes: %d",num);
    return 0;
}