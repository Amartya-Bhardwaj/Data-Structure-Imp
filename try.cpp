#include<iostream>
using namespace std;

int main(){
    int t;
    int D,d,P,Q;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>D>>d>>P>>Q;
        int x = D/d;
        
        if(D%d == 0){
            int result = d*(P*x + (x/2)*(x-1)*Q);
            cout<<result<<endl;
        }
        else{
            int result =  d*(P*x + (x/2)*(x-1)*Q) + (D%d)*(P + x*Q);
            cout<<result<<endl;
        }
    }
    return 0;
}