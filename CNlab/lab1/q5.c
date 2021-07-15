#include<stdio.h>
#include<stdlib.h>

int main(){
    int *A;
    int n;
    scanf("%d",&n);
    A = (int* )malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    // Reallocation.
    A = (int* )realloc(A,6);
     for(int i=0;i<6;i++){
        scanf("%d",&A[i]);
    }
    printf("\nNew Array: ");
     for(int i=0;i<6;i++){
        printf("%d ",A[i]);
    }
    return 0;
}