#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
	int k;
	long double x,t;
	unsigned long int n;
	cin>>k;
	for(int i=0;i<k;i++){
		long double temp = 0;
		long double count = 0;
		vector<long double> A;
        vector<long double> B;
        A.resize(n);
        B.resize(n);
		cin>>n>>x>>t;
		A.at(0) = 0;
		B.at(0) = t;
		temp = x;
		for(long int j=1; j<n;j++){
			t = t + x;
			B.at(j) = t;
			A.at(j) = temp;
			temp = temp + x;
		}
		for(long int j=0; j<n; j++){
			for(long int f=j+1; f<=n; f++){
				if(B.at(j)>=A.at(f)){
					count = count + 1;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}