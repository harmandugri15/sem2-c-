#include <iostream>
#include <vector>
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
        Node* tail;
        int size;
    public:
    LinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
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
    
//-----------------------------------------------------------------------
    void insertAtBegining(int value){
        Node* newNode=new Node(value);

        if(head==NULL){
            head=tail=newNode;
        }
        else{
            // node k next mei head ka address dall dena hai and point head to the newone

            newNode->next=head;
            head=newNode;
        }
        size++;
    }
//-----------------------------------------------------------------------
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
            head=tail=newNode;
        }
        else{
            // node k next mei head ka address dall dena hai and point head to the newone
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }

    void displaysize(){
        cout<< "total size is : "<<size;
    }
      
//------------------------------getting the index of the given first element-----------------------------------------
    int getIndex(int value){
        
            Node* temp = head;  // start from head
            int count=0;
            while (temp != NULL){
                if(temp->data==value){
                    return count;
                }
                else{
                    temp=temp->next;
                    count++;
                }    
            }
        return -1;

    }
    // ----------------if an element exists or not-------------

    bool contains(int value){
        return getIndex(value)!=-1;
    }
    // --------------------------get value at index--------------

    int getValueAtIndex(int index){
        if(index>size-1 || index<0 ){
            return -1;
        }
        else{
            Node* current=head;
            for(int i=0;i<index;i++){
                current=current->next;
            }
            return current->data;
        }
    }

    //----------------------removing the first element-----------------

    void removeFirst(){
        if(head==NULL){
            cout<<" List is already empty"<<endl;
            return;
        }
        else if(head==tail){
            delete head;
            head=tail=NULL;
        }
        else{
            head=head->next;
            delete head;
        }

    }

    void rmoveAtLast(){
        if(tail==NULL){
            cout<<" List is already empty"<<endl;
            return;
        }
        else if(head==tail){
            delete tail;
            head=tail=NULL;
        }
        else{
            Node* temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            delete tail;
            tail=temp;
            tail->next=NULL;
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
    
    l1.insertAtLast(1000);
    l1.display();
    cout<<endl;
    l1.displaysize();
    cout<<endl;

    int value=1000;
    int a=l1.getIndex(value);
    cout<<a<<" is the index of "<<value<<endl;

    int newvalue=10;
    bool result=l1.contains(newvalue);
    if(result==0){
        cout<<newvalue<<" is not present"<<endl;
    }
    else{
        cout<<newvalue<<" is present"<<endl;
    }

    int valforindex=3;
    int valueatind=l1.getValueAtIndex(valforindex);
    if(valueatind==-1){
        cout<<"fuddu index given"<<endl;
    }
    else{
        cout<< "value at index "<<valforindex<<" is "<<valueatind<<endl;
    }
    l1.removeFirst();
    l1.display();
    cout<<endl;

    l1.rmoveAtLast();
    l1.display();

    return 0;
}