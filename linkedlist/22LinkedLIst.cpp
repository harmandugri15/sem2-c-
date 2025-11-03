// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int value;
//     Node* next;
//     Node* prev;
//     Node(int value){
//         this->value=value;
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

//     void insertatfirst(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             newnode->next=head;
//             head->prev=newnode;
//             head=newnode;
//         }
//         size++;
//     }

//     void displayforeward(){
//         if(head==NULL){
//             cout<<"DLL is empty "<<endl;
//             return;
//         }

//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->value<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }

//     void deletefromfront(){

//         if(head==NULL){
//             cout<<"Empty"<<endl;
//         }
//         else if(head==tail){
//             head=tail=NULL;
//         }
//         else{
//             Node* newnode=head;
//             head=head->next;
//             head->prev=NULL;
//             delete newnode;
//         }
//         size--;
//     }
//         void deletefromend(){
//         if(head==NULL){
//             cout<<"List empty";
//         }
//         else {
//             Node* temp = tail;
//             if(head==tail){
//                 head=tail=NULL;
//             }
//             else{
//                 tail=tail->prev;
//                 tail->next=NULL;
//             }
//             delete temp;
//             size--;
//         }
//     }

//     int getValueAtIndex(int index) {
//     if (index < 0 || index >= size) {
//         cout << "Index Out of Bounds!\n";
//         return -1;
//     }

//     Node* current;

//     // Optimized traversal: decide whether to start from head or tail
//     if (index < size / 2) {
//         current = head;
//         for (int i = 0; i < index; i++) {
//             current = current->next;
//         }
//     } else {
//         current = tail;
//         for (int i = size - 1; i > index; i--) {
//             current = current->prev;
//         }
//     }

//     return current->value;
// }

// void deleteAtPosition(int index) {
//         if (head == NULL) {
//             cout << "List empty\n";
//             return;
//         }
//         if (index == 0) {
//             deletefromfront();
//             return;
//         }
//         if (index == size - 1) {
//             deletefromend();
//             return;
//         }

//         Node* current = head;
//         for (int i = 0; i < index; i++) {
//             if (current == NULL) {
//                 cout << "Index out of bounds\n";
//                 return;
//             }
//             current = current->next;
//         }

//         Node* prevNode = current->prev;
//         Node* nextNode = current->next;

//         prevNode->next = nextNode;
//         nextNode->prev = prevNode;

//         delete current;
//         size--;
//     }

//     bool isPalindrome() {

//         if (head == NULL || head == tail) return true; // Empty or single node
//         Node* left = head;
//         Node* right = tail;

//         while (left != right && left->prev != right) {
//             if (left->value != right->value) {
//                 return false; // Mismatch
//             }
//             left = left->next;
//             right = right->prev;
//         }

//         return true;
//     }

// void rotate(int N) {
//     if (head == NULL || N <= 0 || N % size == 0) {
//         return;
//     }

//     N = N % size; // avoid unnecessary rotations

//     // Find the new head (size - N steps from old head)
//     Node* temp = head;
//     for (int i = 0; i < size - N; i++) {
//         temp = temp->next;
//     }

//     // New head and new tail
//     Node* newHead = temp;
//     Node* newTail = temp->prev;

//     // Connect old tail to old head (make it circular)
//     tail->next = head;
//     head->prev = tail;

//     // Break the circle at newHead/newTail
//     newHead->prev = NULL;
//     newTail->next = NULL;

//     // Update head and tail
//     head = newHead;
//     tail = newTail;
// }

// };

// int main(){

//     LinkedList l1;
//     l1.insertatfirst(50);
//     l1.insertatfirst(40);
//     l1.insertatfirst(20);
//     l1.insertatfirst(10);
//     l1.insertatfirst(100);

//     l1.displayforeward();

//     l1.displayforeward();
//     int a =l1.getValueAtIndex(2);

//     if(a!=-1){
//         cout<<a<<" is the value at given index"<<endl;
//     }
//     else{
//         cout<<"not found"<<endl;
//     }
//     l1.deleteAtPosition(2);
//     cout<<"list afer deleteing from 2 given index is :"<<endl;
//     l1.displayforeward();

//     bool b=l1.isPalindrome();
//     if(b==true){
//         cout<<"pallindrome"<<endl;
//     }
//     else{
//         cout<<"not pallindrome"<<endl;
//     }

//     cout<<"after rotation of the linked list"<<endl;
//     l1.rotate(2);
//     l1.displayforeward();

//     return 0;
// }

// //----------------------------------circular linked list-----------------------------------

#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtFront(int value)
    {
        Node *newnode = new Node(value);
        if (head == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            newnode->next = head;
            tail->next = newnode;
            head = newnode;
        }
    }

    void insertAtEnd(int value)
    {
        Node *newnode = new Node(value);
        if (tail == NULL)
        {
            head = tail = newnode;
            tail->next = head;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void display()
    {

        if (head == NULL)
        {
            cout << "LL is empty " << endl;
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->value << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void deleteAtFront()
    {
        if (head == NULL)
        {
            cout << "empty list" << endl;
        }
        else if (head == tail)
        {
            head = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
    }
    void deleteAtEnd()
    {
        if (tail == NULL)
        {
            cout << "empty list" << endl;
        }
        else if (head == tail)
        {
            tail = NULL;
        }
        else
        {
            Node *temp = tail;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            temp->next = head;
        }
    }

    void deleteAtIndex(int index)
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node *DeletedNode = temp->next;
        temp->next = DeletedNode->next;
        delete DeletedNode;
    }
};

int main()
{

    LinkedList l1;

    l1.insertAtFront(50);
    l1.insertAtEnd(100);
    l1.insertAtEnd(20);
    l1.insertAtEnd(40);
    l1.insertAtEnd(80);
    l1.insertAtEnd(410);
    l1.display();

    // l1.deleteAtFront();
    // l1.deleteAtEnd();

    l1.deleteAtIndex(2);

    l1.display();

    return 0;
}