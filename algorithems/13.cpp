#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int recursivebinary(vector<int> arr,int low,int high,int target){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]>target){
            return recursivebinary(arr, low,mid-1,target);
        }
        else{
            return recursivebinary(arr, mid+1,high,target);
        }
}



int main(){

//--------------find the minimum in rotated sorted array----------

    // vector<int> arr={5,6,7,8,9,10,2,3,4};
    // int low=0;
    // int high=arr.size()-1;
// -----------------------------------------
    // while(low<high){

    //     int mid=low+(high-low)/2;

    //     if(arr[low]<arr[high]){
    //         cout<<" mini is : "<<arr[low];
    //     }

    //     if(arr[mid]>arr[high]){
    //         low=mid+1;
    //     }
    //     else{
    //         high=mid;
    //     }
    // }
    // cout<<" minimum is : "<<arr[low];
// ------------------------------------------  
// -------------------------------recursive function-----------------

    // void fun(int num) {
    // if(num == 0)
    // return;
    // fun(num-1);
    // cout << num << " ";
    // }---1 2 3 4 5           head recursion

// ------------------------recursive binary search without for loop-----------------

// vector<int> arr={1,2,3,4,5,7,7,8,9,10};
// int target=9;
// int low=0;
// int high=arr.size()-1;
// int a=recursivebinary(arr,low,high,target);
// cout<<a;

//------------------------------bubble sort that works on comparing adjacent elements---------------------

// vector<int> arr={20,20,10,9,8};
// int count=0;
// for(int i=0;i<arr.size();i++){
    
//     for(int j=0;j<arr.size()-i-1;j++){
//         if(arr[j]<arr[j+1]){       //just change > to convert into descending/ ascending order
//             count++;  
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
        
//     }
// }
//     if(count==0){
//         cout<<"already sorted";
//     }
//     else{
//         for(int i:arr){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }
