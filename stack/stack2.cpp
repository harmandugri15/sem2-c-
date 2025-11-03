
// // --------------------------with top implementation---------------
// #include <iostream>
// #include <vector>
// #define MAX 10
// using namespace std;

// class MyStack
// {

// private:
//     int items[MAX];
//     int top;

// public:
//     MyStack()
//     {
//         top = -1;
//     }

//     void push(int item)
//     {
//         if (top == MAX - 1)
//         {
//             cout << "Stack Overflow!" << endl;
//             return;
//         }
//         else
//         {
//             items[top++] = item;
//         }
//     }

//     int pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow! " << endl;
//             return -1;
//         }
//         return items[top--];
//     }

//     int peek()
//     {
//         if (top == -1)
//         {
//             cout << "Stack is Empty!" << endl;
//             return -1;
//         }
//         return items[top];
//     }

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
//         cout << "Stack elements: " << endl;
//         for (int i = top; i >= 0; i--)
//         {
//             cout << items[i] << " ";
//         }
//         cout << endl;
//     }

//     int getsize(){
//         return top+1;
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
//     cout<<"size is :"<<s.getsize();
//     cout<<endl;

//     s.display();

//     cout << "Peek top: " << s.peek() << endl;

//     cout << "Popped: " << s.pop() << endl;
//     cout << "Popped: " << s.pop() << endl;

//     s.display();

//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     cout<<"size is :"<<s.getsize();

//     return 0;
// }

// -------------------------------------------------------------------------------------with node------------------------

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         next = nullptr;
//     }
// };

// class LinkedListStack
// {
// private:
//     Node *top;
//     int size;

// public:
//     LinkedListStack()
//     {
//         top = nullptr;
//         size = 0;
//     }

//     void push(int data)
//     {
//         Node *newnode = new Node(data);
//         newnode->next = top;
//         top = newnode;
//         size++;
//     }
//     int pop()
//     {
//         if (top == nullptr)
//         {
//             cout << "stack underflow" << endl;
//             return -1;
//         }
//         else
//         {
//             Node *temp = top;
//             int popped = temp->data;
//             top = top->next;
//             delete temp;
//             size--;
//             return popped;
//         }
//     }

//     int peek()
//     {
//         return top->data;
//     }

//     void display()
//     {
//         if (top == nullptr)
//         {
//             cout << "stack underflow" << endl;
//             return;
//         }
//         else
//         {
//             Node *temp = top;
//             for (int i = 0; i < size; i++)
//             {
//                 cout << temp->data << " ";
//                 temp = temp->next;
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     LinkedListStack l1;
//     l1.push(20);
//     l1.push(30);
//     l1.push(40);
//     l1.push(50);
//     l1.push(60);

//     l1.display();

//     l1.pop();
//     cout << "after popping" << endl;
//     l1.display();

//     int a=l1.peek();
//     cout<<a<<endl;
// }

// ----------------------include stack----------------------

//---------------no way to display without popping -----------------

// #include <iostream>
// #include <stack>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     cout << "top element : " << st.top() << endl;
//     st.pop();

// while (!st.empty())
// {
//     cout << st.top() << " ";
//     st.pop();
// }

// }
//-------------------------------------------------------------------------------------cls
// using stack solve balanced equation wala question

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str = "(A+B)*(C-D))"; // example
    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (st.empty()) // no matching '('
            {
                cout << "Not Balanced\n";
                return 0;
            }
            else
            {
                st.pop(); // match found
            }
        }
    }

    if (st.empty())
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";

    return 0;
}
