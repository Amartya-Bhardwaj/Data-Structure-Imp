#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int t,n;
    vector<int> A;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        A.resize(n);
        for(int j=0;j<n;j++){
            cin>>A[j];
        }
        if(n <= 2){
            cout<<"0"<<endl;
        }
        else{
            sort(A.begin(), A.end());
            st.push(A[0]);
            for(int i=1;i<n;i++){
                if(A[i] == st.top()){
                    st.pop();
                }
                else{
                    st.push(A[i]);
                }
            }
            if(!st.empty()){
                cout<<st.size()-1<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}