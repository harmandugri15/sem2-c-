// 1. printing all the subarray + substring: n(n+1)/2
// 2. counting the total number of subarrays
// 3. counting the number of subarray at a perticular length k: n-k+1
// 4. from any given index(i) or character the number of substring will be: n-i
// 5. finding the largest palindromic substring count
// 6. printing all the subarray and its sum.

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main(){
//---------------------------------------------------------------------------------------------
    // vector<int> arr={1,2,3,4,5};
    // int lenn=3;
    // cout<<"NO of subarrays at level "<<lenn <<" are : "<<(arr.size())-lenn+1<<endl;
    // for(int i=0;i<arr.size();i++){
    //     vector<int> temp;
    //     for(int j=i;j<arr.size();j++){
    //         temp.push_back(arr[j]);
    //         if(temp.size()==lenn){
    //             for(int k=0;k<temp.size();k++){
    //                 cout<<temp[k]<< " ";
    //             }
    //         }
            
    //     }
    //     cout<<endl;
    // }
    // ----------------------------------------------------------------------------------------

    // string str="harman";
    // int index=2;
    // int count=str.size()-index;
    // cout<<"no of substr starting with index "<<index<< " is : "<<count<<endl;
    // for(int i=0;i<str.size();i++){
    //     cout<<str.substr(index,i-index+1)<<endl;
    // }

    // -----------------------------------------------------------------------------------

    // vector<int> arr={1,2,3,4,5};
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i; j < arr.size(); j++) {
    //         int sum=0;
    //         for (int k = i; k <= j; k++) {
    //             sum+=arr[k];
    //             cout << arr[k] << " ";
    //         }
    //         cout<<"SUM: "<<sum;
    //         cout << endl;
    //     }
    // }

    // ----------------------------------could be done better by a vector---------------------------------------

// vector<int> arr={1,2,3,4,5};
// int stuffyinteger=7;
//     for (int i = 0; i < arr.size(); i++) {
//         for (int j = i; j < arr.size(); j++) {
//             int sum=0;
//             for (int k = i; k <= j; k++) {
//                 sum+=arr[k];
//                 if(sum<=stuffyinteger){
//                 cout << arr[k] << " ";
//             }
//         }
//             if(sum<=stuffyinteger){
//                 cout<<"Sum is : "<<sum;
//             }
//             cout << endl;
//         }
//     }
// -------------------------- to find the max less than k subarray's sum -------------------------------------------

    // vector<int> arr = {1,2,3,4,5};
    // int k = 7;
    // int maxlen = 0;

    // for(int i=0; i<arr.size(); i++){
    //     int sum =0;
    //     for(int j=i; j<arr.size(); j++){
    //         sum += arr[j];

    //         if(sum <=k){
    //             int length = j -i +1;// length of the subarray
    //             maxlen= max(maxlen, length);
    //         }
    //     }
    // }
    // cout << maxlen<<endl;

//  -----------------------which subarray has the maximum sum--and what --------------------------
 // ---------------------------------another way--by-Kadane's approach---------------------- 

    // int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int currentSum =0;
    // int maxsum = INT_MIN;
    // for(int i=0; i<size; i++){
    //     currentSum += arr[i];
    //     if(currentSum >maxsum){
    //         maxsum = currentSum;
    //     }else if (currentSum < 0){
    //         currentSum =0;
    //     };
    // };
    // cout << maxsum;
// --------------------------------------------------------------------------------------------------------
//      int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to get array size

//     int result = INT_MIN;
//     int currentSum = 0;
//     int start = 0, end = 0, x = 0;

//     for (int i = 0; i < n; i++) {
//         currentSum += arr[i];

//         if (currentSum > result) {
//             result = currentSum;
//             start = x;
//             end = i;
//         }

//         if (currentSum < 0) {
//             currentSum = 0;
//             x = i + 1;  // Next possible start
//         }
//     }

//     // Output result
//     cout << "Maximum Sum Subarray: ";
//     for (int i = start; i <= end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\nMaximum Sum: " << result << endl;

    return 0;
}