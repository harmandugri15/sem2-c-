// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// void reverseQueue(queue<int>& q) {
//     vector<int> arr;
//     while (!q.empty()) {
//         arr.push_back(q.front());
//         q.pop();
//     }
//     for (int i = arr.size() - 1; i >= 0; i--) {
//         q.push(arr[i]);
//     }
// }

// int main(){

//     queue<int> q;
//     q.push(50);
//     q.push(40);
//     q.push(30);
//     q.push(20);
//     q.push(10);

//     reverseQueue(q);

//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     return 0;
// }

// ------------------------implement queue using stack---------------

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <stack>
// using namespace std;

// class queueusingstack{
//     private:
//     stack<int> s1 ,s2;
//     int rear;
//     int size;
//     public:
//     queueusingstack(){
//         this->size=0;
//         this->rear=-1;
//     }

//     void enqueue(int item){

//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }

//         s1.push(item);
//         rear=item;

//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }

//     }

//     void dequeue(){
//         if(s1.empty()){
//             cout<<"empty"<<endl;
//         }
//         int val=s1.top();
//         s1.pop();
//     }

//     void peekfront(){
//         cout<<s1.top()<<endl;
//     }
//     void peekend(){
//         cout<<rear<<endl;
//     }

//     void display(){
//         while(!s1.empty()){
//             cout<<s1.top()<<" ";
//             s1.pop();
//         }
//     }

// };

// int main(){

//     queueusingstack q1;
//     q1.enqueue(5);
//     q1.enqueue(10);
//     q1.enqueue(15);
//     q1.enqueue(20);

//     q1.dequeue();

//     q1.display();
//     return 0;
// }

// ------------using second approach(to make dequeuw complex and enqueue simple ) -----------

// #include<iostream>
// #include<stack>
// using namespace std;
// class QusingStack{
//     stack<int> s1,s2;
//     int rear;
//     public:
//     bool isEmpty(){
//         return s1.size()==0 && s2.size()==0;
//     }
//     void enqueue(int item){
//         rear=item;
//         s1.push(item);
//     }
//     int dequeue(){
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int val=s2.top();
//         s2.pop();
//         return val;
//     }
//     int peekFront(){
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         if(s2.empty()){
//             while(!s1.empty()){
//                 s2.push(s1.top());
//                 s1.pop();

//             }
//         }
//         return s2.top();
//     }

//     int peekRear(){
//         if(s1.empty() && s2.empty()){
//             return -1;
//         }
//         return rear;
//     }
// };
// int main(){
//     QusingStack q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);

//     cout << q.dequeue() << endl;  // 10
//     cout << q.dequeue() << endl;  // 20
//     cout << q.peekFront() << endl; // 30
//     cout << q.peekRear() << endl;  // 50
// }

//-------------similarly doing opposite implementing stack using queue-------------

// #include <iostream>
// #include <queue>
// using namespace std;

// class StackUsingQueues {
//     queue<int> q1, q2;

// public:
//     bool isEmpty() {
//         return q1.empty() && q2.empty();
//     }

//     void push(int x) {
//         // Push the new element to q2
//         q2.push(x);
//         // Move all elements from q1 to q2
//         while (!q1.empty()) {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         // Swap q1 and q2
//         swap(q1, q2);
//     }

//     int pop() {
//         if (q1.empty()) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         int val = q1.front();
//         q1.pop();
//         return val;
//     }

//     int top() {
//         if (q1.empty()) {
//             cout << "Stack is empty\n";
//             return -1;
//         }
//         return q1.front();
//     }
// };

// int main() {
//     StackUsingQueues s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     cout << s.pop() << endl;
//     cout << s.pop() << endl;
//     cout << s.top() << endl;
//     return 0;
// }

// ---------------making the pop() havy and push() light---------------

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> result;

    while (!q.empty())
    {
        result.push(q.front());
        q.pop();
    };

    while (!result.empty())
    {
        cout << result.top() << endl;
        result.pop();
    }; 
    
}

class StackusingQueue
{
private:
    queue<int> q1, q2;

public:
    void enqueue(int value)
    {
        q1.push(value);
    }

    void dequeue()
    {

        while (q1.size() > 1)
        {
            q2.push(q1.front());
            q1.pop();
        };
        q2.pop();
        swap(q1, q2);
    };

    int peekfront()
    {
        return q1.front();
    };
};

int main()
{

    queue<int> q;
    q.push(10);
    q.push(40);
    q.push(20);
    q.push(60);
    q.push(30);
    q.push(50);

    q.pop();

    reverseQueue(q);
};