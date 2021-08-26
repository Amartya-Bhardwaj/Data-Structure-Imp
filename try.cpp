#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int A[t];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    for(int i=0;i<t;i++){
        if(A[i] >= 2000){
            cout<<"1"<<endl;
        }
        else if (A[i] >= 1600 && A[i] < 2000)
        {
            cout<<"2"<<endl;
        }
        else if (A[i] < 1600)
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}