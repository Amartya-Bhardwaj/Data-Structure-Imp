#include<stdio.h>
#include<limits.h>
#include<time.h>

// int max = INT_MIN;
// int min = INT_MAX;

int partMax(int A[],int l,int n){
    int Max = INT_MIN;
    for(int i=l;i<n;i++){
        if(A[i] > Max){
            Max = A[i];
        }
    }
    return Max;
}

int partMin(int A[], int l, int n){
    int Min = INT_MAX;
    for(int i=l;i<n;i++){
        if(A[i] < Min){
            Min = A[i];
        }
    }
    return Min;
}

void check(int A[],int l,int h){
    int mid;
    int max, min;
    mid = (l+h)/2;
    if(partMax(A,0,mid) > partMax(A,mid+1,h)){
        max = partMax(A,0,mid);
    }
    else
        max = partMax(A,mid+1,h);
    if(partMin(A,0,mid) < partMin(A,mid+1,h)){
        min = partMin(A,0,mid);
    }
    else
        min = partMin(A,mid+1,h);
    printf("Max : %d\n Min : %d\n",max,min);
}

int main(){
    int n;
   time_t strt,end;
    double t;
    scanf("%d",&n);
    int A[n];
    int sort[n];
    for(int i=0;i<n;i++){
        A[i] = rand();
        sort[i] = i+1;
    }
    strt = clock();
    check(A,0,n);
    end = clock();
    t = end - strt;
    printf("time for random no: %f\n",(t/CLOCKS_PER_SEC));
    strt = clock();
    check(sort,0,n);
    end = clock();
    t = end - strt;
    printf("time for sorted no: %f\n",(t/CLOCKS_PER_SEC));
    return 0;
}