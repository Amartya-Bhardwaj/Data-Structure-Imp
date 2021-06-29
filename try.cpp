#include<iostream>
#include<stdlib.h>
using namespace std;



int main(){
	int t,n;
	int *A,*B;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		A = new int[n];
		B = new int[n];
		for(int j=0;j<n;j++){
			A[j] = j+1;
			B[j] = 0;
		}
		int x = A[n-1];
		for(int j=0;j<n-1;j++){
			B[j+1] = A[j];
		}
		B[0] = x;
		for(int j=0;j<n;j++){
			cout<<B[j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}