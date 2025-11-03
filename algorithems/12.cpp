#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <climits>
#include <cmath>
using namespace std;

// int binarysearch(const vector<int>& arr, int target) {
//     int low = 0;
//     int high = arr.size() - 1;
//     int result=-1;
    
//     while (low <= high) {
//         int mid = low + (high - low) / 2; // avoid overflow

//         if (arr[mid] == target) {
//             result=mid;
//             high=mid-1;//keep searching
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result; // target not found
// }

// -----------------------from back-----------


// int binarysearchfromback(const vector<int>& arr, int target) {
//     int low = 0;
//     int high = arr.size() - 1;
//     int result=-1;
    
//     while (low <= high) {
//         int mid = low + (high - low) / 2; // avoid overflow

//         if (arr[mid] == target) {
//             result=mid;
//             low=mid+1;
//         } else if (arr[mid] < target) {
//             low = mid + 1;
//         } else {
//             high = mid - 1;
//         }
//     }
//     return result; // target not found
// }

//--------------to count the number of times target occurs-----------------

int findOccurrence(vector<int>& arr, int target, bool findFirst) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            if (findFirst) {
                high = mid - 1; // Search left half
            } else {
                low = mid + 1; // Search right half
            }
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}
// -----------------------------------------------------------------------------

    int floorSquareRoot(int num) {
        int i=1;
        while((long long) i * i <= num){
        i++;
    }
    return i-1;
}



int main(){
    //-------------------------linear searching algorithm-----------------------------------
    // int target=5;
    // vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==target){
    //         cout<<"found at : "<< i <<" th index"<<endl;
    //     }
    // }
    
    // --------------------------bianry search-----(function on top)-----------------------
    
    // int target=3;
    // vector<int> arr={1,1,1,2,3,3,3,4,5,5,5,5,5,5,5,5,5};//sorted array
    // int a=findOccurrence(arr,target,true);
    // int b=findOccurrence(arr,target,false);
    // cout<<"number of elements are : "<<b-a<<endl;

    // ------------------------to find square root---------------------------

    // int num=10000000;
    // cout<<floorSquareRoot(num);
// ----------------------------------------square root using sus wisadry----------------
    // int n=625;
    // int low=1;
    // int high=n;
    // int result=-1;
    // while(low<=high){
    //     int mid=low+(high-low)/2;
    //     if((long long) mid*mid<=n){
    //         result=mid;
    //         low=mid+1;
    //     }
    //     else{
    //         high=mid-1;
    //     }

    // }
    // cout<<result<<endl;
// --------------------------------------------------------------------

    return 0;
}
