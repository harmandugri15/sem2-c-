// #include <iostream>
// #include <algorithm>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     public:
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//         this->prev=NULL;
//     }

// };
// class LinkedList{
//     private:
//     Node* head;
//     Node* tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }

//     void last(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             newnode->next=NULL;
//             tail=newnode;
//         }
//         size++;
//     }
//     void display(){

//         if(head==NULL){
//             cout<<"list is empty "<<endl;
//         }
//         else{
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//         }
//     }

//     int giveindex(int value){
//         if(head==NULL){
//             return -1;
//         }
//         else{
//             int count=0;
//             Node* temp=head;
//             while(temp->data!=value){
//                 temp=temp->next;
//                 count++;
//             }
//             return count;
//         }
//         return -1;
//     }

//     bool contains(int value){
//         if(giveindex(value)!=-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }

//     int getvalueatindex(int index){
//         if(head==NULL){
//             return -1;
//         }
//         else if(index>=size){
//             return -1;
//         }
//         else{
//             Node* temp=head;
//             for(int i=0;i<index;i++){
//                 temp=temp->next;
//             }
//             return temp->data;
//         }
//     }

//     void pop(){
//         if(head==NULL){
//             cout<<"list is empty "<<endl;
//         }
//         else if(head==tail){
//             delete tail;
//             head=tail=NULL;
//         }
//         else{
//             Node* temp=head;
//             while(temp->next->next!=NULL){
//                 temp=temp->next;
//             }
//             delete tail;
//             tail=temp;
//             tail->next=NULL;
//         }
//         size--;
//     }

//     int* toArray(){
//         int* arr=new int[size];
//         Node* temp=head;
//         for(int i=0;i<size;i++){
//             arr[i]=temp->data;
//             temp=temp->next;
//         }
//         return arr;
//     }

//     void sortedlinkedlist(){
//         int* arr=toArray();
//         sort(arr,arr+size);
//         Node* temp=head;
//         for(int i=0;i<size;i++){
//             temp->data=arr[i];
//             temp=temp->next;
//         }
//         delete[] arr;
//     }

//     int  getmiddle(){
//         Node* slow=head;
//         Node* fast=head;
//         if(head==NULL){
//             cout<<"the list is empty ";
//             return -1;
//         }
//         else if(head->next==NULL){
//             return head->data;
//         }
//         else{
//             while( fast->next!=NULL && fast!=NULL){
//                 fast=fast->next->next;
//                 slow=slow->next;
//             }
//             return slow->data;
//         }
//     }

    








// };


// int main(){

//     LinkedList l1;
    
//     l1.last(50);
//     l1.last(1200);
//     l1.last(100);
//     l1.last(99);
//     l1.last(205);
//     l1.last(503);

//     l1.display();
//     cout<<endl;

//     int a=l1.giveindex(1200);
//     if(a!=-1){
//         cout<<a<<" is the index of 1200"<<endl;
//     }
//     else{
//         cout<<"the number is not present in the list "<<endl;
//     }

//     bool b=l1.contains(99);
//     if(b){
//         cout<<"99 is present "<<endl;
//     }
//     else{
//         cout<<"absent "<<endl;
//     }

//     cout<<"value at second index is "<<endl;
//     int valueatwo=l1.getvalueatindex(2);
//     cout<<valueatwo<<endl;

//     l1.pop();
//     l1.display();
    
//     cout<<endl;
//     cout<<"sorted array: ";
//     l1.sortedlinkedlist();
//     l1.display();
//     cout<<endl;

//     int la=l1.getmiddle();
//     cout<<"middle value is : "<< la<<endl;

//     return 0;
// }

// ------------------------------------circular linked list-------easy hai ---------------------------

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         next=NULL;
//     }

// };
// class LinkedList{
//     Node* head;
//     Node* tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }

//     void addtofirst(int data){
//         Node* newnode=new Node(data);
//         if(head==NULL){
//             head=tail=newnode;
//             tail->next=head;
//         }
//         else{
//             newnode->next=head;
//             head=newnode;
//             tail->next=head;

//         }
//         size++;
//     }
//     void display(){
//         if(head==NULL){
//             cout<<"list is empty "<<endl;
//         }
//         else{
//             Node* temp=head;
//             do{
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//             while(temp!=head);
//         }

//     }
//     void addtoend(int data){
//         Node* newnode=new Node(data);
//         tail->next=newnode;
//         newnode->next=head;
//         tail=newnode;
//     }


// };


// int main(){

    // LinkedList l1;
    // l1.addtofirst(50);
    // l1.addtofirst(49);
    // l1.addtofirst(30);
    // l1.addtofirst(20);
    // l1.addtofirst(5);
    // l1.addtoend(1000);
    // l1.addtoend(599);

    // l1.display();

    // return 0;
// }

// -----------------------------------doubly linked list----------------------------

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
        size=0;
    }

    void addtofirst(int data){
        Node* newnode=new Node(data);
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
    void display(){
        if(head==NULL){
            cout<<"list is empty "<<endl;
        }
        else{
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }

    }
    void addtoend(int data){
        Node* newnode=new Node(data);

        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }


};

int main(){

    LinkedList l1;
    l1.addtofirst(50);
    l1.addtofirst(49);
    l1.addtofirst(30);
    l1.addtofirst(20);
    l1.addtofirst(5);
    l1.addtoend(1000);
    l1.addtoend(599);

    l1.display();


    return 0;
}