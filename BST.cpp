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
                p = new Node();
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

            p = new Node();
            p->data = key;
            p->leftchild = p->rightchild = nullptr;
            if(key < r->data){
                r ->leftchild = p;
            }
            else{
                r -> rightchild = p;
            }
        }
        void Preorder(Node* p){
            if(p){
                cout<<p->data<<" ";
                Preorder(p->leftchild);
                Preorder(p->rightchild);
            }
        }
        int Height(Node* p){
            int l=0;
            int r=0;
            if(p){
                l = Height(p->leftchild);
                r = Height(p->rightchild);
                if(l > r){
                    return l + 1;
                }
                else{
                    return r + 1;
                }
            }
            return 0; 
        }
};

int main(){
    BST t;
    t.create(23);
    t.create(31);
    t.create(12);
    t.Preorder(root);
    return 0;
}