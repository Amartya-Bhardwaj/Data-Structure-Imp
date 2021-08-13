#include<bits/stdc++.h>
#include<string>
using namespace std;

bool check(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if (!st.empty())
        {
            if(st.top() == '('&&s[i]==')' || st.top() == '{'&&s[i]=='}' || st.top() == '['&&s[i]==']'){
                st.pop();
            }
            else
                return false;
        }
        else{
            return false;
        }
    }
    return st.empty();
}

int main(){
    string s = "{}[])";
    cout<<check(s);
    return 0;
}