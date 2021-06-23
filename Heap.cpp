#include<bits/stdc++.h>

// It tooks order of nlogn to insert n elements.

void insert(int A[], int n){
    int temp = A[n];
    int i = 0;
    while(i>1 && temp > A[i]){
        A[i] = A[i/2];
        i = i/2;
    }
    temp = A[i];
}

int main(){
    int A[] = {0,10,23,45,21,3,5,7};
    for(int i=2; i<8; i++){
        insert(A,i);
    }
    return 0;
}