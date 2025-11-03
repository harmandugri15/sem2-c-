#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
// ----------------------------------------------------------selection sort-------------

// int main(){
//     vector<int> arr={7,8,2,6,1,3};
//     for(int i=0;i<arr.size()-1;i++){
//         int m=i;
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[m]>arr[j]){
//                 m=j;
//             }
//         }
//         // int temp=arr[i];
//         // arr[i]=arr[m];
//         // arr[m]=temp;
//         if(m!=i){
//             swap(arr[i],arr[m]);
//         }
//     }
    
//     for(int k:arr){
//         cout<<k<<" ";
//     }
//     return 0;
// }

//--------------------cant be optimised as it will try to finid the minimum----------

//---------------------------insertion sort-----best till now between bubble , selection and insertion ssorting technique---------------------

    // void insersion(vector<int> arr){
    //         for (int i = 1; i < arr.size(); i++) {
    //         int key = arr[i];
    //         int j = i - 1;
    //         while (j >= 0 && arr[j] > key) { // if soted arry than arr[j]> key will be always false and time complexity will be O(n).
    //             arr[j + 1] = arr[j];
    //             j--;
    //         }
    //         arr[j + 1] = key;
    //     }
        
    //     for (int k : arr) {
    //         cout << k << " ";
    //     }
    // }

// int main() {
//     vector<int> arr = {7, 8, 2, 6, 1, 3};
//     insersion(arr);

    

//     return 0;
// }
//--------------------------------------merge sort (least time complexity)----------------------

vector<int> merge(vector<int>& arr1,vector<int>& arr2){
    vector<int> result;
    int i=0;
    int j=0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i]<arr2[j]){
            result.push_back(arr1[i]);
            i++;
        }
        else {
            result.push_back(arr2[j]);
            j++;
        }

    }
     while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }
    return result;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7};
    vector<int> arr2 = {1,2, 4, 6};
    
    vector<int> merged = merge(arr1, arr2);
    
    for (int x : merged) {
        cout <<x<< " ";
    }

}
