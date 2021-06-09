#include<iostream>
#include<queue>
using namespace std;
// THis process is of order on n^2
void BFS(int vertex , int A[8][8], int n){
    queue<int> q;
    int u;
    int visited[8] = {0};
    cout<<vertex<<","<<flush;
    visited[vertex] = 1;
    q.emplace(vertex);
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        for(int j=1; j<=n; j++){
            if(A[u][j] == 1 && visited[j] == 0){
                cout<<j<<","<<flush;
                visited[j] = 1;
                q.emplace(j);
            }
        }
    }
    cout<<endl;
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
    BFS(2,A,8);
    return 0;
}