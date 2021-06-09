#include<iostream>
using namespace std;

class Node{
    public:
        Node* leftchild;
        Node* rightchild;
        int data;
};

Node* root = nullptr;

class BST{
    public:
        void create(int key){
            Node* p,*r;
            Node* t = root;
            if(root == nullptr){
                p = new Node;
                p->data = key;
                p->leftchild = p->rightchild = nullptr;
                root = p;
                return;
            }
            while(t != nullptr){
                r = t;
                if(key > t->data){
                    t = t->rightchild;
                }
                else if(key < p->data){
                    t = t->leftchild;
                }
                else{
                    return;
                }
            }

            p = new Node;
            p->data = key;
            p->leftchild = p->rightchild = nullptr;
            if(key < r->data){
                r ->leftchild = p;
            }
            else{
                r -> rightchild = p;
            }
        }
};