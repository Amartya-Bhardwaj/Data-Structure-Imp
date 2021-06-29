#include<bits/stdc++.h>

// It tooks order of nlogn to insert n elements.

void swap(int a, int b){
    int temp = a;
    b = a;
    b = temp;
}

void insert(int A[], int n){
    int temp = A[n];
    int i = 0;
    while(i>1 && temp > A[i]){
        A[i] = A[i/2];
        i = i/2;
    }
    temp = A[i];
}

void Delete(int A[], int n){
    int i,j;
    i = 1;
    j = 2*i;
    int x = A[n];
    A[1] = A[n];
    while(j < n-1){
        if(A[j+1] > A[j]){
            j = j+1;
        }
        if(A[i] < A[j]){
            swap(A[i],A[j]);
            i = j;
            j = j*2;
        }
        else{
            break;
        }
    }
}

int main(){
    int A[] = {0,10,23,45,21,3,5,7};
    for(int i=2; i<8; i++){
        insert(A,i);
    }
    return 0;
}