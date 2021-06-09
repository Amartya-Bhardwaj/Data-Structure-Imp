#include<iostream>
using namespace std;

int hash1(int key){
    return key%10;
}

void combining(int H[], int key){
    int index = hash1(key);
    H[index] = key;
    
}

bool add(int H[], int key1, int key2, int target){
    int index1 = hash1(key1);
    int index2 = hash1(key2);
    if(H[index1]+H[index2]==target){
        return true;
    }
    return false;
}

int main(){
    int H[10] = {0};
    combining(H,10);
    combining(H,11);
    combining(H,35);
    cout<<add(H,10,11,22) ;
    return 0;
}