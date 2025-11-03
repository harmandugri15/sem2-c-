// evaluating the postfix equation

// #include <iostream>
// #include <stack>
// #include <algorithm>
// #include <cmath>
// using namespace std;

// int applyOp(int a, int b, char op)
// {
//     switch (op)
//     {
//     case '+':
//         return a + b;
//     case '-':
//         return a - b;
//     case '*':
//         return a * b;
//     case '/':
//         return a / b;
//     case '%':
//         return a % b;
//     case '^':
//         return pow(a, b);
//     }
//     return 0;
// }

// int evaluatepostfix(string exp)
// {
//     stack<int> t;
//     for (auto ch : exp)
//     {
//         if (isdigit(ch))
//         {
//             t.push(ch - '0');
//         }
//         else
//         {
//             int val2 = t.top();
//             t.pop();
//             int val1 = t.top();
//             t.pop();

//             int result = applyOp(val1, val2, ch);
//             t.push(result);
//         }
//     }
//     return t.top();
// }

// int main()
// {
//     string exp = "231*+9-";
//     cout << "Postfix Evaluation Result: " << evaluatepostfix(exp) << endl;
//     return 0;
// }
// if we want to evaluate a prefix than we have to iterate the loop in reverse;


//rpn calculator--reverse polish calculator;


// #include <iostream>
// #include <stack>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// #include <string>
// using namespace std;

// int applyOp(int a, int b, string op)
// {
//    if (op == "+") return a + b;
//     if (op == "-") return a - b;
//     if (op == "*") return a * b;
//     if (op == "/") return a / b;
//     if (op == "%") return a % b;
//     if (op == "^") return pow(a, b);
//     return 0;
// }

// int evaluatepostfix(vector<string> exp)
// {
//     stack<int> t;
//     for (auto ch : exp)
//     {
//         if (isdigit(ch[0]) || (ch.size() > 1 && isdigit(ch[1])))
//         {
//             t.push(stoi(ch));
//         }
//         else
//         {
//             int val2 = t.top();
//             t.pop();
//             int val1 = t.top();
//             t.pop();

//             int result = applyOp(val1, val2, ch);
//             t.push(result);
//         }
//     }
//     return t.top();
// }

// int main()
// {
//     vector<string> exp = {"23","1","*","9","+","5","-"};
//     int a=evaluatepostfix(exp);
//     cout << "Postfix Evaluation Result: " << a << endl;
//     return 0;
// }



//--------------------   next greater element classic problem   ----------------
//-------------------    using right to left approach      ---------------


#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;



vector<int> nge(vector<int>&  arr)
{
    vector<int> result(arr.size());
    stack<int> st;
    for(int i=arr.size()-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            result[i]=-1;
        }
        else{
            result[i]=st.top();
        }
        st.push(arr[i]);
    }
    return result;
    
}

int main()
{
    vector<int> exp = {2,3,5,1,4,9};

    vector<int> rr=nge(exp);
    for(int i=0;i<rr.size();i++){
        cout<<rr[i]<<" ";
    }
    cout<<endl;
  
    return 0;
}