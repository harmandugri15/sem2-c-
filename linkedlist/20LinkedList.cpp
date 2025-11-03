//start of cycle in a linked list 


#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
private:
    Node* head;
    Node* tail;
    int size;

public:
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }

    void insertAtbegin(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
        size++;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    // create a cycle: last node -> second node
    void createCycle() {
        if (head == NULL || head->next==NULL) return;

        Node* temp = head;
        Node* second = head->next;  // storing 2nd node

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = second;  // Last node connects back to 2nd node
    }

    bool checkCycle() {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;             
            fast = fast->next->next;       

            if (slow == fast) {            
                return true;
            }
        }
        return false;  // reached end => no cycle
    }

    Node* selectcyclestarts(){
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;             
            fast = fast->next->next;       

            if (slow == fast) {            
                break;
            }
        }
        if(fast==NULL || fast->next==NULL){
            return NULL; 
        }

        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // cycle starting node
    }

    void breakcycle(){
        Node* start = selectcyclestarts();
        if (start == NULL) return; // no cycle

        Node* temp = start;
        while (temp->next != start) {
            temp = temp->next;
        }
        temp->next = NULL;  // break cycle
    }
};


int main(){
    LinkedList l1;
    l1.insertAtbegin(50);
    l1.insertAtbegin(60);
    l1.insertAtbegin(70);
    l1.insertAtbegin(80);

    l1.createCycle();

    if(l1.checkCycle()){
        cout<<"cycle"<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
        l1.display();
    }

    Node* start=l1.selectcyclestarts();
    if(start!=NULL){
        cout<<"cycle starts with value : "<<start->data<<endl;
    }

    // break cycle
    l1.breakcycle();

    if(l1.checkCycle()){
        cout<<"still cycle"<<endl;
    } else {
        cout<<"cycle removed"<<endl;
        l1.display();
    }

    return 0;
}
