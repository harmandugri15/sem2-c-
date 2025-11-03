//-----------------queue with linked list and generic library-----------

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     public:
//     Node(int data){
//         this->data=data;
//         next=NULL;
//     }
// };

// class CircularQueue{
//     Node* front;
//     Node* end;
//     int size;
//     public:
//     CircularQueue(){
//         front=NULL;
//         end=NULL;
//         size=0;
//     }

//     bool isempty(){
//         return size==0;
//     }

//     void enqueue(int data){
//         Node* newnode=new Node(data);
//         if(front==NULL){
//             front=end=newnode;
//         }
//         else{
//             end->next=newnode;
//             end=newnode;
//         }
//         size++;
//     }

//        void dequeue(){
//         Node* temp=front;
//         if(front==NULL){
//             cout<<"NO elements are there "<<endl;
//         }
//         else{
//             front=front->next;
//             delete temp;
//         }
//         size--;
//     }

//     void display(){
//         Node* temp=front;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;

//     }
//     void sizeofll(){
//         cout<<"size is : "<<size;
//     }

// };

// int main(){
//     CircularQueue l1;
//     l1.enqueue(5);
//     l1.enqueue(10);
//     l1.enqueue(15);
//     l1.enqueue(20);
//     l1.enqueue(25);

//     l1.dequeue();

//     l1.display();
//     l1.sizeofll();
// }

// ------------------------stl queue---------------------
// #include <iostream>
// #define MAX 10;
// #include <queue>
// using namespace std;

// int main()
// {

//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     q.pop();

//     cout << "size is : " << q.size()<<endl;;
//     cout<<"front is : "<<q.front()<<endl;
//     cout<<"Rear is : "<<q.back()<<endl;

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     return 0;
// }
// -------------------------------------deque---with linked list ----------------

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

// public:
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// class CircularQueue
// {
//     Node *front;
//     Node *end;
//     int size;

// public:
//     CircularQueue()
//     {
//         front = NULL;
//         end = NULL;
//         size = 0;
//     }

//     bool isempty()
//     {
//         return size == 0;
//     }

//     void insertrear(int data)
//     {
//         Node *newnode = new Node(data);
//         if (front == NULL)
//         {
//             front = end = newnode;
//         }
//         else
//         {
//             end->next = newnode;
//             end = newnode;
//         }
//         size++;
//     }

//     void insertfront(int data)
//     {
//         Node *newnode = new Node(data);
//         if (front == NULL)
//         {
//             front = end = newnode;
//         }
//         else
//         {
//             newnode->next = front;
//             front = newnode;
//         }
//         size++;
//     }

//     void deletefront()
//     {
//         Node *temp = front;
//         if (front == NULL)
//         {
//             cout << "NO elements are there " << endl;
//         }
//         else
//         {
//             front = front->next;
//             delete temp;
//         }
//         size--;
//     }

//     void deleterear()
//     {
//         Node *temp = end;
//         if (front == NULL || end == NULL)
//         {
//             cout << "NO elements are there " << endl;
//         }
//         else
//         {
//             Node *temp = front;
//             while (front->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = NULL;
//             end = temp;
//         }
//         size--;
//     }

//     void display()
//     {
//         Node *temp = front;
//         while (temp != NULL)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
//     void sizeofll()
//     {
//         cout << "size is : " << size;
//     }
// };

// int main()
// {
//     CircularQueue l1;
// }

// -------------------------deque with array implementation------------

// #include <iostream>
// #include <vector>
// #include <array>
// #define MAX 10
// using namespace std;
// class LinearQueue
// {
//     int front, rear, size;
//     int *arr;

// public:
//     LinearQueue()
//     {
//         size = 0;
//         arr = new int[MAX];
//         front = 0;
//         rear = -1;
//     }

//     bool isempty()
//     {
//         return size == 0;
//     }

//     bool isfull()
//     {
//         return size == MAX;
//     }

//     void addatrear(int element)
//     {
//         if (isfull())
//         {
//             cout << "queue is full" << endl;
//             return;
//         }
//         else
//         {
//             rear = (rear + 1) % MAX;
//             arr[rear] = element;
//             size++;
//         }
//     }

//     void addatfront(int element)
//     {
//         if (isfull())
//         {
//             cout << "queue is full" << endl;
//             return;
//         }
//         else
//         {
//             front = (front-1 +MAX) % MAX;
//             arr[front] = element;
//             size++;
//         }
//     }

//     // similar to pop in stack instead it is removing from front
//     void deletefront()
//     {
//         if (isempty())
//         {
//             cout << "queue is empty" << endl;
//             return;
//         }
//         int val = arr[front];
//         front = (front + 1) % MAX;
//         size--;
//     }

//     void deleterear(){
//          if (isempty())
//         {
//             cout << "queue is empty" << endl;
//             return;
//         }
//         int val = arr[rear];
//         rear = (rear - 1 + MAX) % MAX;
//         size--;
//     }

//     void display()
//     {
//         if (isempty())
//         {
//             cout << "queue is empty" << endl;
//             return;
//         }
//         for (int i = 0; i < size; i++)
//         {
//             int index = (front + i) % MAX;
//             cout << arr[index] << " ";
//         }
//         cout << endl;
//     }
// };
// int main(){
//     LinearQueue l1;
//     l1.addatfront(5);
//     l1.addatfront(10);
//     l1.addatfront(15);
//     l1.addatrear(20);
//     l1.display();


// }


// ---------------deque using doubly linked list ------------

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

class CircularQueue {
    Node *front;
    Node *end;
    int size;

public:
    CircularQueue() {
        front = NULL;
        end = NULL;
        size = 0;
    }

    bool isempty() {
        return size == 0;
    }

    void insertrear(int data) {
        Node *newnode = new Node(data);
        if (isempty()) {
            front = end = newnode;
        } else {
            end->next = newnode;
            newnode->prev = end;
            end = newnode;
        }
        size++;
    }

    void insertfront(int data) {
        Node *newnode = new Node(data);
        if (isempty()) {
            front = end = newnode;
        } else {
            newnode->next = front;
            front->prev = newnode;
            front = newnode;
        }
        size++;
    }

    void deletefront() {
        if (isempty()) {
            cout << "NO elements are there" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front != NULL)
            front->prev = NULL;
        else
            end = NULL; 
        delete temp;
        size--;
    }

    void deleterear() {
        if (isempty()) {
            cout << "NO elements are there" << endl;
            return;
        }
        Node *temp = end;
        end = end->prev;
        if (end != NULL)
            end->next = NULL;
        else
            front = NULL; 
        delete temp;
        size--;
    }

    void display() {
        Node *temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void sizeofll() {
        cout << "Size is: " << size << endl;
    }
};

int main() {
    CircularQueue l1;
    l1.insertrear(10);
    l1.insertrear(20);
    l1.insertfront(5);

    l1.display();    
       
    l1.deletefront();
    l1.deleterear();

    l1.display();       
    l1.sizeofll();      
}