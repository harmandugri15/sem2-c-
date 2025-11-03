// max priotity queue(max-heap)  and min priority queue

// --------using array---------

// #include <iostream>
// #include <array>
// #define MAX 10
// using namespace std;

// struct Element
// {
//     int item;
//     int priority;
// };

// class ArrayPriorityQueue
// {
// private:
//     Element arr[MAX];
//     int size;

// public:
//     ArrayPriorityQueue()
//     {
//         size = 0;
//     }

//     bool isfull()
//     {
//         return size == MAX;
//     };

//     bool isempty()
//     {
//         return size == 0;
//     };

//     void enqueue(int value, int priority)
//     {
//         if (isfull())
//         {
//             cout << "full array ";
//         }
//         else
//         {
//             arr[size].item = value;
//             arr[size].priority = priority;
//             size++;
//         }
//     }

//     void dequeue() {
//         if (isempty()) {
//             cout << "Queue is empty!" << endl;
//         } else {
//             int maxPriorityIndex = 0;
//             for (int i = 1; i < size; i++) {
//                 if (arr[i].priority > arr[maxPriorityIndex].priority) {
//                     maxPriorityIndex = i;
//                 }
//             }
//             for (int i = maxPriorityIndex; i < size - 1; i++) {
//                 arr[i] = arr[i + 1];
//             }
//             size--;
//         }
//     }

//     void display(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i].item<<" ";
//         }
//     }

//     int peakfront() {
//         if(isempty()){
//             return -1;
//         }
//         else{
//             int maxindes=0;
//             for(int i=1;i<size;i++){
//                 if(arr[i].priority>arr[maxindes].priority){
//                     maxindes=i;
//                 }
//             }
//             return arr[maxindes].item;
//         }
//     }

// };

// // int peakrear() {}

// int main()
// {
//     ArrayPriorityQueue l1;
//     l1.enqueue(5,1);
//     l1.enqueue(6,5);
//     l1.enqueue(7,3);
//     l1.enqueue(8,2);

//     l1.dequeue();

//     l1.display();

//     return 0;
// }
// --------------------------------using linkedlist -----------------------
// we maintain three things in node--data, priority , nextptr;

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     int priority;
//     Node *next;

// public:
//     Node(int value, int priority)
//     {
//         this->priority = priority;
//         this->data = value;
//         next = nullptr;
//     }
// };
// class Linkedlist
// {
//     int size;
//     Node *head;
//     Node *tail;

// public:
//     Linkedlist()
//     {
//         this->head = nullptr;
//         this->tail = nullptr;
//         this->size = 0;
//     }

//     bool isempty()
//     {
//         return size == 0;
//     }

//     int front()
//     {
//         return head->priority;
//     }

//     void enqueue(int data, int priority)
//     {
//         Node *newnode = new Node(data, priority);
//         if (isempty())
//         {
//             head = tail = newnode;
//             size++;
//         }
//         else if (head->priority < priority)
//         {
//             newnode->next = head;
//             head = newnode;
//             size++;
//         }
//         else
//         {
//             Node *temp = head;
//             while (temp->next != nullptr && temp->next->priority >= priority)
//             {
//                 temp = temp->next;
//             }
//             newnode->next = temp->next;
//             temp->next = newnode;
//             if (temp->next == nullptr)
//             {
//                 tail = newnode;
//             }
//             size++;
//         }
//     }

//     void dequeue(){
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         size--;
//     }

//     void display(){
//         Node* temp=head;
//         while(temp!=nullptr){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }

// };
// int main(){
//     Linkedlist l1;
//     l1.enqueue(5,1);
//     l1.enqueue(4,6);
//     l1.enqueue(0,2);
//     l1.enqueue(99,3);
//     // will print in dscending order
//     l1.dequeue();

//     l1.display();
// }

//------------------------------using stl-------comparator function to determine for which thing to sort the patient for ---------
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Define a struct to hold data and priority
struct Node
{
    int data;
    int priority;
};

// Custom comparator for the priority queue
struct ComparePriority
{
    bool operator()(const Node &a, const Node &b)
    {
        return a.priority < b.priority; // Higher priority comes first
    }
};

int main()
{
    // Declare a priority queue with custom comparator
    priority_queue<Node, vector<Node>, ComparePriority> pq;

    // Enqueue elements
    pq.push({5, 1});
    pq.push({4, 6});
    pq.push({0, 2});
    pq.push({99, 3});

    // Dequeue and display
    pq.pop(); // Remove the highest priority element (4, 6)

    // Display all elements
    while (!pq.empty())
    {
        Node current = pq.top();
        cout << current.data << " ";
        pq.pop();
    }
    cout << endl;

    return 0;
}
