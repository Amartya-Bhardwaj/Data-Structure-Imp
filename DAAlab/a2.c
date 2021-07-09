#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void search(int *A, int size, int key){
    int i,j;
    for(i=0; i<size; i++){
        for(j = i+1; j<size; j++){
            if(pow(A[j],2) + pow(A[i],2) == key){
                printf("i: %d  j: %d\n",i,j);
            }
            else{
                continue;
            }
        }
    }
}

int main(){
    int *A;
    int size,key;
    scanf("%d",&size);
    scanf("%d",&key);
    A = (int *)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    search(A,size,key);
    return 0;
}