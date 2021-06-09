#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class Node{
    public:
        Node* leftchild;
        int data;
        Node* rightchild;
        Node() {};
        Node(int data);
};

Node::Node(int data){
    leftchild = nullptr;
    this->data = data;
    rightchild = nullptr;
}

Node* root = nullptr;

class BTree{
    
    queue<Node*> q;
    public:
        void create(){
            Node *p,*r = nullptr;
            int data,temp;
            cout<<"Enter the root value: ";
            cin>>data;
            root = new Node;
            root -> data = data;
            root -> leftchild = root -> rightchild = nullptr;
            q.emplace(root);
            while (!q.empty())
            {
                p = q.front();
                q.pop();
                cout<<"\nEnter left child value of "<<p->data<<" "<<flush;
                cin>>data;
                if(data != -1){
                    r = new Node;
                    r ->data = data;
                    r -> leftchild = r -> rightchild = nullptr;
                    root -> leftchild = r;
                    q.emplace(r);
                }
                cout<<"\nEnter right child value of "<<p->data<<" "<<flush;
                cin>>data;
                if(data != -1){
                    r = new Node;
                    r ->data = data;
                    r -> leftchild = r -> rightchild = nullptr;
                    root -> rightchild = r;
                    q.emplace(r);
                }
            }    
        }
        void Preorder(Node* p){
            if(p){
                cout<<p->data<<" ";
                Preorder(p->leftchild);
                Preorder(p->rightchild);
            }
        }
        void Ipreorder(Node * p){
            int t;
            stack<Node*> st;
            while (p != nullptr || !st.empty())
            {
                if(p!=nullptr){
                    cout<<p->data<<" "<<flush;
                    st.emplace(p);
                    p = p->leftchild;
                }
                else{
                    p = st.top();
                    st.pop();
                    p = p->rightchild;
                }
            }
            
        }
        void Postorder(Node* p){
            if(p){
                Postorder(p->leftchild);
                Postorder(p->rightchild);
                cout<<p->data<<" ";
            }
        }
};

int main(){
    BTree t;
    t.create();
    t.Preorder(root);
    cout<<endl;
    //t.Postorder(root);
    //t.Ipreorder(root);
    return 0;
}
   