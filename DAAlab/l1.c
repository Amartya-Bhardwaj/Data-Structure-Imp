#include<stdio.h>
#include<stdlib.h>

int search(int *A, int size){
    int maxEl, maxCount =0, count;
    for(int i=0;i<size;i++){
        count = 1;
        for(int j=1+1; j<size; j++){
            if(A[j] == A[i]){
                count++;
                if(count > maxCount){
                    maxEl = A[j];
                }
            }
        }
    }
    return maxEl;
}

int main(){
    int *A;
    int size;
    scanf("%d",&size);
    A = (int *)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        scanf("%d",&A[i]);
    }
    int maxFreq = search(A,size);
    printf("maximum frequencies: %d",maxFreq);
    return 0;
}