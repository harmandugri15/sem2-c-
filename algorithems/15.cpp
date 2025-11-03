//---------------------------------------merged sort---------space complexity O(n)--------no chances of optimisation-------------------- 
//-----------divide and conquor----key element is merging an array --------------------

// #include <iostream>
// #include <vector>
// #include <string>
// #include <climits>
// #include <algorithm>
// using namespace std;
//------------with other array ---------------------------------

// vector<int> merged(vector<int> arr1,vector<int> arr2){
//     vector<int> temp;
//     int i=0;
//     int j=0;
//     while(i<arr1.size() && j<arr2.size()){
//         if(arr1[i]>arr2[j]){
//             temp.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             temp.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while(i<arr1.size()){
//         temp.push_back(arr1[i]);
//         i++;
//     }
//     while(j<arr2.size()){
//         temp.push_back(arr2[j]);
//         j++;
//     }
//     return temp;

// }
// vector<int> mergeSort(vector<int>& arr) {
//     if (arr.size() <= 1){
//         return arr;
//     }
//     //else
//     int mid = arr.size() / 2;
//     vector<int> left(arr.begin(), arr.begin() + mid);
//     vector<int> right(arr.begin() + mid, arr.end());

//     vector<int> sortedLeft = mergeSort(left);
//     vector<int> sortedRight = mergeSort(right);

//     return merged(sortedLeft, sortedRight);  // Using your merge logic
// }

// int main(){
//     vector<int> arr1={10,2,30,15,0,4,1,22,8};
//     vector<int> myarr=mergeSort(arr1);
   
  
//     for(auto k:myarr){
//         cout<<k<<" ";
//     }

//     return 0;
// }

// -----------------------in place merge sorting-------------------

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        } 
        else{
            temp[k] = arr[j];
            k++;
            j++;
        } 
    }
    while (i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right){
        temp[k] = arr[j];
        k++;
        j++;
    }
    
    for (i = 0; i < k; i++) arr[left + i] = temp[i];
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22};
    mergeSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    return 0;
}


