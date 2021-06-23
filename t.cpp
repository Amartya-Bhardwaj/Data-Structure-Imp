#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int k;
	long double x,t;
	unsigned long int n;
	cin>>k;
	for(int i=0;i<k;i++){
		long double temp = 0;
		unsigned long int count = 0;
		long double *A, *B;
		cin>>n>>x>>t;
		A = new long double[n];
		B = new long double[n];
		A[0] = 0;
		B[0] = t;
		temp = x;
		for(long int j=1; j<n;j++){
			t = t + x;
			B[j] = t;
			A[j] = temp;
			temp = temp + x;
		}
		for(long int j=0; j<n; j++){
			for(long int f=j+1; f<=n; f++){
				if(B[j]>=A[f]){
					count = count + 1;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}