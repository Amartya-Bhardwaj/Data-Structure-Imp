#include<iostream>
#include<stdlib.h>
using namespace std;

class Node{
    public:
     Node* next;
     int data;
};

void create(Node** head, int data){
    Node* p = new Node();
    p->data = data;
    p->next = *head;
    *head = p;
}

void Insert(Node** head, int index, int data){
    Node* p = NULL;
    Node* t = *head;
    if(index == 0){
        p = new Node();
        p->data = data;
        p->next = *head;
        *head = p;
    }
    else{
        for(int i=0;i<index-1;i++){
            t = t->next;
        }
        p = new Node();
        p->data = data;
        p->next = t->next;
        t->next = p;
    }
}

void display(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node* root = NULL;
    create(&root,5);
    create(&root,8);
    Insert(&root,1,19);
    display(root);
    return 0;
}