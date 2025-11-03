#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;


int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

string infixtopostfix(string str){
    string result="";
    stack<char> s;
    for(char ch:str){
        if(isalnum(ch)){
            result+=ch;
        }
        else if(ch=='('){
            s.push(ch);
        }
        else if(ch==')'){
            while(!s.empty() && s.top()!='('){
                result+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
        }
        else{
             while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                result += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while(!s.empty()){
        result+=s.top();
        s.pop();
    }
    return result;
}

int main(){

    string exp = "(A+B)*C";
    cout << "Infix Expression: " << exp << endl;
    cout << "Postfix Expression: " << infixtopostfix(exp) << endl;
    return 0;

    return 0;
}