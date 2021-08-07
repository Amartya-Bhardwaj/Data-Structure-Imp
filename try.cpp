#include<bits/stdc++.h>
#include<vector>
using namespace std;

void InsertionSort(int A[]){
	int x,j=0;
	for(int i=1;i<5;i++){
		x = A[i];
		j = i-1;
		while (j>-1 && A[j]>x)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = x;
	}
}

int main(){
	int A[5] = {45,34,465,32,23};
	InsertionSort(A);
	for(int i=0;i<5;i++){
		printf("%d ",A[i]);
	}
	return 0;
}