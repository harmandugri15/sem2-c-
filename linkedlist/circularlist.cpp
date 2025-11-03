// #include <iostream>
// #include <array>
// using namespace std;
// int main(){
    // int arr[]={10,20,30,40,50};
    // int count=0;
    // for(int i=2;i<5+i;i++){
    //     count++;
    //     i=i%5;
    //     cout<<arr[i]<<" ";
    //     if(count==5){
    //         break;
    //     }
    // }


    // ----------------better way-------------

    // int arr[]={10,20,30,40,50};
    // int start=2;
    // for(int i=0;i<5;i++){
    //     int ci=(start+i)%5;
    //     cout<<arr[ci]<<" ";
    // }
    // cout<<endl;




//----------------next greater element in a circular way -------------


#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


vector<int> NextGreaterElementCircular(vector<int>& arr) {
    int n = arr.size();

    vector<int> result(n);
    stack<int> st;

    for (int i = 2 * n - 1; i >= 0; i--) {
        int idx = i % n;

        while (!st.empty() && arr[st.top()] <= arr[idx]) {
            st.pop();
        }

        if (st.empty()) {
            result[idx] = -1;
        } else {
            result[idx] = arr[st.top()];
        }

        st.push(idx);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 2, 1,3,4,5,6,2};
    vector<int> res = NextGreaterElementCircular(arr);

    for (int val : res) {
        cout << val << " ";
    }
    return 0;
}