#include<stdio.h>
#include<stdlib.h>

int main(){
    int *A;
    int size, sum = 0;
    scanf("%d",&size);
    A = (int* )malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<size;i++){
        sum = sum + A[i];
    }
    printf("sum of Array: %d",sum);
    return 0;
}