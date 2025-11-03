// #include <iostream>
// #include <stack>
// using namespace std;

// void checkBalanced(string exp)
// {
//     stack<char> st1;
//     for (int i = 0; i < exp.length(); i++)
//     {
//         if ((exp[i] == '{') || (exp[i] == '[') || (exp[i] == '(') || (exp[i] == '<'))
//         {
//             st1.push(exp[i]);
//         }
//         else if (exp[i] == '}')
//         {
//             if (st1.top() == '{')
//                 st1.pop();
//             else
//             {
//                 cout << "not balanced";
//                 return;
//             }
//         }
//         else if (exp[i] == ']')
//         {
//             if (st1.top() == '[')
//                 st1.pop();
//             else
//             {
//                 cout << "not balanced";
//                 return;
//             }
//         }
//         else if (exp[i] == ')')
//         {
//             if (st1.top() == '(')
//                 st1.pop();
//             else
//             {
//                 cout << "not balanced";
//                 return;
//             }
//         }
//         else if (exp[i] == '>')
//         {
//             if (st1.top() == '<')
//                 st1.pop();
//             else
//             {
//                 cout << "not balanced";
//                 return;
//             }
//         }
//     }

//     if (st1.empty())
//     {
//         cout << "balanced";
//     }
//     else
//     {
//         cout << "not balanced";
//     }
// }

// int main()
// {
//     string exp = "(A+B)";
//     checkBalanced(exp);

// }
// -------------------------sir's method for all ------------
// #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// int main()
// {
//     string str = "(A+B)*(C-D))"; // example
//     stack<char> st;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(' || str[i]=='{' || str[i]=='[' || str[i]=='<')
//         {
//             st.push(str[i]);
//         }
//         else if (str[i] == ')' || str[i]=='}' || str[i]==']' || str[i]=='>')
//         {
//             if (st.empty()) // no matching opening bracket
//             {
//                 cout << "Not Balanced\n";
//                 return 0;
//             }
//             else
//             {
//                 char top = st.top();
//                 if ((top == '(' && str[i] == ')') ||
//                     (top == '{' && str[i] == '}') ||
//                     (top == '[' && str[i] == ']') ||
//                     (top == '<' && str[i] == '>'))
//                 {
//                     st.pop(); // correct match
//                 }
//                 else
//                 {
//                     cout << "Not Balanced\n";
//                     return 0;
//                 }
//             }
//         }
//     }

//     if (st.empty())
//         cout << "Balanced\n";
//     else
//         cout << "Not Balanced\n";

//     return 0;
// }
//---------------------------------------------new easier method----------------------------------

// #include <iostream>
// #include <stack>
// using namespace std;

// bool isLeftBracket(char ch){
//     return (ch == '(' || ch == '{' || ch == '[' || ch == '<');
// }

// bool isRightBracket(char ch){
//     return (ch == ')' || ch == '}' || ch == ']' || ch == '>');
// }

// bool bracketsMatch(char left, char right){
//     if (left == '(' && right == ')') return true;
//     if (left == '{' && right == '}') return true;
//     if (left == '[' && right == ']') return true;
//     if (left == '<' && right == '>') return true;
//     return false;
// }

// bool isBalanced(string str) {
//     stack<char> s;

//     for (char ch : str) {
//         if (isLeftBracket(ch)) {
//             s.push(ch);
//         } 
//         else if (isRightBracket(ch)) {
//             if (s.empty()) 
// 		        return false;

//             char top = s.top();
//             s.pop();

//             if (!bracketsMatch(top, ch)) {
//                 return false;
//             }
//         }
//     }
//     return s.empty();
// }

// int main() {
//     string str1 = "{<(1+2)>}";
//     string str2 = "{(1+2]>}";

//     cout << (isBalanced(str1) ? "Balanced" : "Not Balanced ") << endl;
//     cout << (isBalanced(str2) ? "Balanced " : "Not Balanced ") << endl;

//     return 0;
// }

//------------------we can use unordered map also -----------------------

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    unordered_map<char, char> brackets = {
        {')', '('},
        {'}', '{'},
        {'>', '<'},
        {']', '['}
    };

    for (char c : s) {
        if (c == '(' || c == '{' || c == '<' || c == '[') {
            st.push(c);
        }
        else if (brackets.find(c) != brackets.end()) { 
            if (st.empty() || st.top() != brackets[c]) {
                return false; 
            }
            st.pop();
        }
    }

    return st.empty(); 
}

int main() {
    string str = "((1+2))>";
    if (isBalanced(str))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    return 0;
}

// -------------------------------polish notation-----------------------
// of 2 types---1. prefix Notation 2. postfix (reverse polish notation) -this one is getting used up generally
// given a linked list -- convert to prefix and postfix notation 
