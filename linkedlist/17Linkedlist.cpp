// a linked list is a linear data structure where elements (called nodes)  are not stored in contiguous memory like arrays
// each node contain:
// 1. data  2. pointer to next node
// unlike arrays, linkd list do not have fixed zixe and do not require elements to be stored next to each other in memory 
// it is stored in a stack 
// last node does not point to any other pointer than it las null value in the place where it was supposed to be a pointer

//head ( node [ value | next pointer  ])
// head points to the first node | and vice versa in tail node
// if head is null than the list is empty 


// 1. singly linkd list- each node haas data and pointert to next node | one directional 
// 2. doubly linked list- each node has 1. data 2. pointer to next 3. pointer to previous node
// 3. circular linked list-last node points back to first node- can be singly or doubly circular

// no concept of index---have to travrse all the list from head to print eg-arr[mid]

//structure based node------------
// struct Node{
//     int data;
//     Node* next;
// };

// class based node:-------(it is just more orgaized and better than structure based node )----

// class Node{
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this-> data=data;
//         this-> next=Null;
//     }

// }

// -----------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; //pointer to other 

    Node(int data){
        this-> data=data;
        this-> next=NULL;
    }
    
};

class LinkedList{
    private:
        Node* head;

    public:
        LinkedList(){
            head=NULL;
        }
        ~LinkedList(){
            Node* currentNode = head; 
            while (currentNode != NULL){
               Node* nextNode=currentNode->next;
               delete currentNode;
               currentNode=nextNode;
            }
            head=NULL;
        }

    // all the remaining functionality will go under this public
    
    void insertAtBegining(int value){
        Node* newNode=new Node(value);

        if(head==NULL){
            head=newNode;
        }
        else{
            // node k next mei head ka address dall dena hai and point head to the newone

            newNode->next=head;
            head=newNode;

        }

    }
    void display(){
        if(head==NULL){
            cout<<" List is already empty"<<endl;
            return;
        }

       Node* temp = head;  // start from head

        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;  // move to next node
        }

    }
    void insertAtLast(int value){
        Node* newNode=new Node(value);

        if(head==NULL){
            head=newNode;
        }
        else{
            Node* currentNode=head;
            while(currentNode->next!=NULL){
                currentNode=currentNode->next;
            }
            currentNode->next = newNode;

        }
    }


};




int main(){
    
    LinkedList l1;
    l1.insertAtBegining(50);
    l1.insertAtBegining(60);
    l1.insertAtBegining(70);
    l1.insertAtBegining(80);
    l1.insertAtBegining(90);

    l1.insertAtLast(100);

    l1.display();


    return 0;
}