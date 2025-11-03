#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

class LinkedList{
    Node* head;
    Node* tail;
    int size;
    public:
    LinkedList(){
        head=NULL;
        tail=NULL;
    }

    void addtoback(int data){
        Node* newnode=new Node(data);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }

    void display(){
        if(head==NULL){
            cout<<"Empty "<<endl;
            return;
        }
        else{
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
    }



};

int main(){

    LinkedList l1;
    l1.addtoback(20);
    l1.addtoback(10);
    l1.addtoback(45);
    l1.display();

    return 0;
}