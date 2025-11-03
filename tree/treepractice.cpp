#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    
    Node( int data){
        this->data=data;
        left=right=nullptr;
    }
};
class Tree{
    public:
    Node* root;
    Tree(){
        root=nullptr;
    }

    bool find(Node* a,int value){
        if(a==nullptr){
            return false;
        }
        else if(a->data==value){
            return true;
        }
        return find(a->left,value) || find(a->right,value);
    }


};

int main()
{
    Tree t1;
    t1.root=new Node(0);
    t1.root->left=new Node(1);
    t1.root->right=new Node(2);
    t1.root->left->left=new Node(3);
    t1.root->left->right=new Node(4);
    t1.root->right->left=new Node(5);
    t1.root->right->right=new Node(5);

    cout<<"root"<<endl;
    cout<<t1.root->data<<endl;
    cout<<t1.root->left->data<<endl;
    cout<<t1.root->right->data<<endl;
    cout<<t1.root->left->left->data<<endl;
    cout<<t1.root->left->right->data<<endl;

    bool a=t1.find(t1.root,3);
    
    if(a==true){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    return 0;
}
