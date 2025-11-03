// -------------------------------polish notation-----------------------
// of 2 types---1. prefix Notation(polish notation) 2. postfix (reverse polish notation) -this one is getting used up generally
// given a linked list -- convert to prefix and postfix notation

// #include <iostream>
// #include <stack>
// #include <cctype>
// using namespace std;
// //postfix--    (A+b)*C= AB+C*

// int precedence(char op){
//     if(op=='^') return 3;
//     if(op=='*' || op=='/' || op=='%') return 2;
//     if(op=='+'|| op=='-') return 1;
//     return -1;
// }

// string infixtopostfix(string exp){
//     stack<char> st;
//     string result="";
//     for(char ch: exp){
//         if(isalnum(ch)){
//             result+=ch;
//         }
//         else if(ch=='('){
//             st.push(ch);
//         }
//         else if(ch==')'){
//             while(!st.empty() && st.top()!='('){
//                 result+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else{
//             while (!st.empty() && precedence(ch) <= precedence(st.top())) {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }

//         }

//         while(!st.empty()){
//             result+=st.top();
//             st.pop();
//         }
//         return result;

//     }

// int main(){

//     string exp = "(A+B)*C";  // Example

//     cout << "Infix   : " << exp << endl;
//     cout << "Postfix : " << infixtopostfix(exp) << endl;
//     return 0;
// }

// --------------------------------------------------to convert the prefix-----------
// reverse the string
// rplace ( with  )  and vice versa
// convert to postfix using the code written above using postfix
// reverse the result

// #include <iostream>
// #include <stack>
// #include <cctype>
// #include <algorithm>
// using namespace std;
// // postfix--    (A+b)*C= AB+C*

// int precedence(char op)
// {
//     if (op == '^')
//         return 3;
//     if (op == '*' || op == '/' || op == '%')
//         return 2;
//     if (op == '+' || op == '-')
//         return 1;
//     return -1;
// }

// string infixtopostfix(string exp)
// {
//     stack<char> st;
//     string result = "";
//     for (char ch : exp)
//     {
//         if (isalnum(ch))
//         {
//             result += ch;
//         }
//         else if (ch == '(')
//         {
//             st.push(ch);
//         }
//         else if (ch == ')')
//         {
//             while (!st.empty() && st.top() != '(')
//             {
//                 result += st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {
//                 st.pop();
//             }
//         }
//         else
//         {
//             while (!st.empty() && precedence(ch) <= precedence(st.top()))
//             {
//                 result += st.top();
//                 st.pop();
//             }
//             st.push(ch);
//         }
//     }

//     while (!st.empty())
//     {
//         result += st.top();
//         st.pop();
//     }
//     return result;
// }

// int main()
// {

//     string exp = "(A+B)*C"; // Example
//     reverse(exp.begin(), exp.end());
//     for (int i = 0; i < exp.length(); i++)
//     {
//         if (exp[i] == '(')
//         {
//             exp[i] = ')';
//         }
//         else if (exp[i] == ')')
//         {
//             exp[i] = '(';
//         }
//     }

//     cout << "Infix   : " << exp << endl;
//     string a = infixtopostfix(exp);
//     reverse(a.begin(), a.end());
//     cout << "Postfix : " << a << endl;
//     return 0;
// }
//  or you can create a function infixtoprefix
//  that uses infixtopostfix function and all other implimentation with it

// ---------------------------------------
//--to check for right associativity as above function will not work for exponents occuring 3 to 4 times-----------

// -----------------------------------------------------------------------------------------
// evalutaing the postfix notation

#include <iostream>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

int applyOp(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    case '^':
        return pow(a, b);
    }
    return 0;
}

int evaluatepostfix(string exp)
{
    stack<int> t;
    for (auto ch : exp)
    {
        if (isdigit(ch))
        {
            t.push(ch - '0');
        }
        else
        {
            int val2 = t.top();
            t.pop();
            int val1 = t.top();
            t.pop();

            int result = applyOp(val1, val2, ch);
            t.push(result);
        }
    }
    return t.top();
}

int main()
{
    string exp = "231*+9-";
    cout << "Postfix Evaluation Result: " << evaluatepostfix(exp) << endl;
    return 0;
}