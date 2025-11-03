// start of doubly linked list 
#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
    Node* next;
    Node* prev;
    int data;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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


    void insertatfirst(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
        size++;
    }

    void displayforeward(){

        if(head==NULL){
            cout<<"DLL is empty "<<endl;
            return;
        }

        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void displaybackward(){

        if(head==NULL){
            cout<<"DLL is empty "<<endl;
            return;
        }

        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }

    void deletefromfront(){
        if(head==NULL){
            cout<<"List empty";
        }
        else {
            Node* temp = head;      
            head = head->next;      
            if (head != NULL) {    
                head->prev = NULL;
            }
            else {
                tail = NULL;       
            }
            delete temp;            
        }
    }


    void deletefromend(){
        if(head==NULL){
            cout<<"List empty";
        }
        else {
            Node* temp = tail;      
            if(head==tail){
                head=tail=NULL;
            }           
            else{
                tail=tail->prev;
                tail->next=NULL;
            }
            delete temp;
            size--;
        }
    }


    void insertatend(int value){
        Node* newnode=new Node(value);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        size++;
    }

    int getValueAtIndex(int value){
        Node* temp=head;
        if(head==NULL){
            return -1;
        }
        else{
            Node* temp=head;
            for(int i=0;i<value;i++){
                if(temp==NULL){
                    return -1;
                }
                else{
                    temp=temp->next;
                }   
            }
            return temp->data;
        }
    }

    int indexOf(int value) {
        if (head == NULL) {
            return -1; 
        }
        Node* temp = head;
        int index = 0;

        while (temp != NULL) {
            if (temp->data == value) {
                return index; 
            }
            temp = temp->next;
            index++;
        }
        return -1;  
    }
    
    bool contains(int value){
        return indexOf(value)!=-1;
    }

    void insertAtPosition(int index, int value) {
        Node* newNode = new Node(value);

        // Case 1: Insert at head
        if (index == 0) {
            newNode->next = head;
            if (head != NULL) {
                head->prev = newNode;
            }
            head = newNode;
            if (tail == NULL) {   // if list was empty
                tail = newNode;
            }
            return;
        }

        // Traverse to index position
        Node* current = head;
        for (int i = 0; i < index; i++) {
            if (current == NULL) {
                cout << "Index out of bounds\n";
                delete newNode;
                return;
            }
            current = current->next;
        }

        // Case 2: Insert at the end
        if (current == NULL) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            return;
        }

        // Adjust the pointers (insert in middle)
        Node* previous = current->prev;

        previous->next = newNode;
        newNode->prev = previous;

        newNode->next = current;
        current->prev = newNode;
}

    void deleteAtPosition(int index) {
        if (head == NULL) {
            cout << "List empty\n";
            return;
        }
        if (index == 0) {
            deletefromfront();
            return;
        }
        if (index == size - 1) {
            deletefromend();
            return;
        }

        Node* current = head;
        for (int i = 0; i < index; i++) {
            if (current == NULL) {
                cout << "Index out of bounds\n";
                return;
            }
            current = current->next;
        }

        Node* prevNode = current->prev;
        Node* nextNode = current->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;

        delete current;
        size--;   
    }


    void reverseDll(){
        vector<int> arr;
        Node* current = tail;
        while (current != NULL) {
            arr.push_back(current->data);
            current = current->prev;
        }
        Node* temp = head;
        for (int i = 0; i < arr.size(); i++) {
            temp->data = arr[i];
            temp = temp->next;
        }

    }
    bool ispallindrome(){
        // to be done yet;
    }


};





int main(){

    LinkedList l1;
    l1.insertatfirst(50);
    l1.insertatfirst(100);
    l1.insertatfirst(200);
    l1.insertatfirst(69);

    l1.insertatend(666);
    l1.deletefromend();
    

    l1.displayforeward();
    l1.displaybackward();

    l1.deletefromfront();
    l1.displayforeward();

    int a=l1.getValueAtIndex(2);
    cout<<a<<" "<<endl;

    int b=l1.indexOf(50);
    cout<<b<<" "<<endl;

    l1.insertAtPosition(2,999);
    l1.displayforeward();

    l1.deleteAtPosition(2);
    l1.displayforeward();

    l1.reverseDll();
    l1.displayforeward();

    

    return 0;
}