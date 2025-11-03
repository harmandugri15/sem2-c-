#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
#include <climits>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
using namespace std;


int main(){


    // vector<int> arr={1,2,3,4,5,6,7,8,9,10};
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


// --------------------------------can be done in n^2--------------------


    // vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    // int lenn=3;
    // cout<<"NO of subarrays at level "<<lenn <<" are : "<<(arr.size())-lenn+1<<endl;
    // for(int i=0;i<(arr.size()-lenn);i++){
    //     for(int j=i;j<i+lenn;j++){
    //        cout<<arr[j]<<" "; 
    //     }
    //     cout<<endl;
    // 

    // //----------------to print their sum-----(sliding window)---------------



    // vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    // int lenn=3;
    // cout<<"Number of subarrays at level "<<lenn <<" are : "<<(arr.size())-lenn+1<<endl;
    //  int maxsum=INT_MIN;
    // for(int i=0;i<=(arr.size()-lenn);i++){
    //     int sum=0;
    //     for(int j=i;j<i+lenn;j++){
    //        sum+=arr[j];
    //     }
    //     maxsum=max(maxsum,sum);
    // }
    // cout<<maxsum<<" is the maximum sum of a subarray with length "<<lenn;


//---------------------------(a better way)------------------------------------------------------

    // vector<int> arr = {2, 3, 14, 5, 6};
    // int k = 2;

    // int window_sum = 0;
    // for (int i = 0; i < k; i++) {
    // window_sum += arr[i];
    // }
    // int maxsum = window_sum;

    // for (int i = k; i < arr.size(); i++) {
    // window_sum += arr[i] - arr[i - k]; // Slide the window (adding next and removing last)
    // maxsum = max(maxsum, window_sum);
    // }
    // cout << "Maximum sum of subarray of size " << k << " is: " << maxsum << endl;


// -------------------count of distinct element from all subarrays of length k---------
// vector<int> arr{1,1,1,1,2,2,3,3,4,5,6,7};

// int k=5;
// for(int i=0;i<(arr.size()-k+1);i++){
//     unordered_set<int> a;
//     for(int j=i;j<i+k;j++){
//         a.insert(arr[j]);
//     }
//     cout<<a.size()<<"  ";

// }


// to count the frequency of all the elements in a set --------------

// vector<int> arr={1,2,3,4,5,5,6,44,4,3,2,2,2,1,0};
// unordered_map<int,int> m;
// for(int i=0;i<arr.size();i++){
//     if(m.find(arr[i])!=m.end()){
//         m[arr[i]]=m[arr[i]]+1;
//     }
//     else{
//         m[arr[i]]=1;
//     }
// }
// for(auto& p:m){
//     cout<<"element "<<p.first<<" and its frequency is : "<<p.second<<endl;
// }

//-------------------------------------------using sliding window-----------------------------------------

    
    // vector<int> arr={1,2,1,3,4,2,3};
    //  int k = 4;
    // unordered_map<int, int> m;
    // for (int i = 0; i < k; i++) {
    //     m[arr[i]]++;
    // }
    // cout << m.size() << " ";

    // for (int i = k; i < arr.size(); i++) {
    //     m[arr[i - k]]--;
    //     if (m[arr[i - k]] == 0) {
    //         m.erase(arr[i - k]);
    //     }
    //     m[arr[i]]++;
    //     cout << m.size() << " ";
    // }
    // cout << endl;

    // ------------------(variable length sliding window)----------------------------

    //-------------largest subarray whose sum is x -----------------------

     vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int currentsum = 0;
    int maxlen = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); end++) {
        currentsum += arr[end];

        // Shrink the window until currentSum <= k
        while (currentsum > k && start <= end) {
            currentsum -= arr[start];
            start++;
        }

        // Check for exact match
        if (currentsum == k) {
            maxlen = max(maxlen, end - start + 1);
        }
    }

    cout << "Maximum length of subarray with sum " << k << " is: " << maxlen << endl;





return 0;
}