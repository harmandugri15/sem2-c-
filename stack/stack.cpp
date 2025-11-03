
// #include <iostream>
// #define MAX 10 // maximum size of stack
// using namespace std;

// class MyStack
// {

// private:
//     int items[MAX]; // array to store stack elements
//     int count;      // number of elements in stack

// public:
//     // Constructor
//     MyStack()
//     {
//         count = 0;
//     }

//     // Push element on stack
//     void push(int item)
//     {

//         if (count == MAX)
//         { // stack full
//             cout << "Stack Overflow!" << endl;
//             return;
//         }

//         items[count++] = item;
//     }

//     // Pop element from stack
//     int pop()
//     {

//         if (count == 0)
//         { // Stack empty
//             cout << "Stack Underflow! " << endl;
//             return -1; // return some invalid value.
//         }

//         return items[--count];
//     }

//     // Peek top element
//     int peek()
//     {
//         if (count == 0)
//         {
//             cout << "Stack is Empty!" << endl;
//             return -1;
//         }
//         return items[count - 1];
//     }

//     // Check if stack is empty
//     bool isEmpty()
//     {
//         return count == 0;
//     }

//     void display()
//     {

//         if (count == 0)
//         {
//             cout << "Stack is empty \n";
//             return;
//         }

//         cout << "Stack elements (top to down)" << endl;
//         for (int i = count - 1; i >= 0; i--)
//         {
//             cout << items[i] << " ";
//         }

//         cout << endl;
//     }
// };

// int main()
// {

//     MyStack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     s.display();

//     cout << "Peek top: " << s.peek() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     cout << "Popped: " << s.pop() << endl;

//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }
// --------------------------with top implementation---------------

// #include <iostream>
// #define MAX 10 // maximum size of stack
// using namespace std;

// class MyStack
// {

// private:
//     int items[MAX]; // array to store stack elements
//     int top;      // number of elements in stack

// public:
//     // Constructor
//     MyStack()
//     {
//         top = -1;
//     }

//     // Push element on stack
//     void push(int item)
//     {

//         if (top == MAX-1)
//         { // stack full
//             cout << "Stack Overflow!" << endl;
//             return;
//         }

//         items[top++] = item;
//     }

//     // Pop element from stack
//     int pop()
//     {

//         if (top == -1)
//         { // Stack empty
//             cout << "Stack Underflow! " << endl;
//             return -1; // return some invalid value.
//         }

//         return items[top--];
//     }

//     // Peek top element
//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is Empty!" << endl;
//             return -1;
//         }
//         return items[top];
//     }

//     // Check if stack is empty
//     bool isEmpty()
//     {
//         return top == -1;
//     }

//     void display()
//     {

//         if (top == -1)
//         {
//             cout << "Stack is empty \n";
//             return;
//         }

//         cout << "Stack elements (top to down)" << endl;
//         for (int i = top; i >= 0; i--)
//         {
//             cout << items[i] << " ";
//         }

//         cout << endl;
//     }
// };

// int main()
// {

//     MyStack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     s.display();

//     cout << "Peek top: " << s.peek() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     cout << "Popped: " << s.pop() << endl;

//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }

// -------------------using a vector----------------
// #include <iostream>
// #include <vector>
// using namespace std;

// class MyStack
// {
// private:
//     vector<int> items; // vector to store stack elements

// public:
//     // Push element on stack
//     void push(int item)
//     {
//         items.push_back(item);
//     }

//     // Pop element from stack
//     int pop()
//     {
//         if (items.empty())
//         {
//             cout << "Stack Underflow!" << endl;
//             return -1;
//         }

//         int topItem = items.back();
//         items.pop_back();
//         return topItem;
//     }

//     // Peek top element
//     int peek()
//     {
//         if (items.empty())
//         {
//             cout << "Stack is Empty!" << endl;
//             return -1;
//         }
//         return items.back();
//     }

//     // Check if stack is empty
//     bool isEmpty()
//     {
//         return items.empty();
//     }

//     // Display stack elements
//     void display()
//     {
//         if (items.empty())
//         {
//             cout << "Stack is empty" << endl;
//             return;
//         }

//         cout << "Stack elements (top to down)" << endl;
//         for (int i = items.size() - 1; i >= 0; i--)
//         {
//             cout << items[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     MyStack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     s.display();

//     cout << "Peek top: " << s.peek() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     cout << "Popped: " << s.pop() << endl;

//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }

// ---------------------------------------ideal way----(linkedList way)-----------------------

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = NULL;
//     }
// };

// class MyStack {
// private:
//     Node* top; // pointer to top node

// public:
//     // Constructor
//     MyStack() {
//         top = NULL;
//     }

//     // Destructor (to free memory)
//     ~MyStack() {
//         while (!isEmpty()) {
//             pop();
//         }
//     }

//     // Push element on stack
//     void push(int item) {
//         Node* newNode = new Node(item);
//         newNode->next = top;
//         top = newNode;
//     }

//     // Pop element from stack
//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack Underflow!" << endl;
//             return -1;
//         }

//         Node* temp = top;
//         int poppedValue = temp->data;
//         top = top->next;
//         delete temp;
//         return poppedValue;
//     }

//     // Peek top element
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is Empty!" << endl;
//             return -1;
//         }
//         return top->data;
//     }

//     // Check if stack is empty
//     bool isEmpty() {
//         return top == NULL;
//     }

//     // Display stack elements
//     void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty" << endl;
//             return;
//         }

//         cout << "Stack elements (top to down)" << endl;
//         Node* current = top;
//         while (current != NULL) {
//             cout << current->data << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     MyStack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

//     s.display();

//     cout << "Peek top: " << s.peek() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     cout << "Popped: " << s.pop() << endl;

//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }
