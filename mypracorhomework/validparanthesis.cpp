#include <iostream>
#include <stack>
using namespace std;

bool valid(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(c=='('){
            s.push(c);
        }
        else if(c=='{'){
            s.push(c);
        }
        else if(c=='['){
            s.push(c);
        }
        else if(!s.empty() || c==')'){
            if(s.top()=='('){
                s.pop();
            }
            else{
                break;
            }
        }
        else if(!s.empty() || c=='}'){
            if(s.top()=='{'){
                s.pop();
            }
            else{
                break;
            }
        }
        else if(!s.empty() || c==']'){
            if(s.top()=='['){
                s.pop();
            }
            else{
                break;
            }
        }
    }
    while(!s.empty()){
        counter+=1;
        s.pop();
    }
    cout<<counter<<endl;

    
}


int main(){
    string str="[harman hello)]}";
    bracketsneeded(str);
    
    
    return 0;
}