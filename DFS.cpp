#include<iostream>
#include<stack>
using namespace std;

int count =0;

void DFS(int A[8][8], int u , int n){
    static int visited[8] = {0};
    if(visited[u] == 0){
        cout<<u<<" "<<flush;
        visited[u] = 1;
        for(int v =1; v<n; v++){
            if(A[u][v]==1&& visited[v] == 0){
                DFS(A,v,n);
                count ++;
            }
        }
    }
    
}

void StDFS(int A[8][8], int start, int n){
    stack<int> st;
    static int visited[8] = {0};
    int u;
    st.emplace(start);
    while (!st.empty())
    {
        u = st.top();
        st.pop();
        if(visited[u]!=1){
            cout<<u<<" "<<flush;
            visited[u] = 1;
            for(int v = n-1; v>=0; v--){
                if(A[u][v]==1 && visited[v]==0){
                    st.emplace(v);
                }
            }
        }
    }
    
}

int main(){
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
    DFS(A,1,8);
    cout<<endl;
    cout<<count;
    return 0;
}