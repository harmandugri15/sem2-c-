#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    // 14-07-2025
    // ------------------two sum problm from leetcode
    //two pointer approch to find the optimal solution

    //pallindrome---to check if the array is a pallandrome or not 
    // vector <int> arr={1,2,3,4,5};
    // for(int i=arr.size()-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }


    // int arr[6]={1,2,3,3,2,1};
    // int rev[6];
    // for(int i=0;i<6;i++){
    //     rev[i]=arr[5-i];
    // }
    // bool flag=true;

    // for(int i=0;i<6;i++){
    //     if(arr[i] != rev[i]){
    //         flag=false;
    //         break;
    //     }
    // }

    // if(flag==true){
    //     cout<<"pallindrome"<<endl;
    // }
    // else{
    //     cout<<"Not Pallindrome"<<endl;
    // }

    // ---------------------------------using two pointer methid-------------------------

    // int arr[]={1,2,3,3,2,1};
        
    // int length= sizeof(arr) / sizeof(arr[0]);
    // int rev[length];

    // bool flag= true;

    // int start =0;
    // int end= length-1;

    // while(start < end) {
    //     if(arr[start] != arr[end]){
    //     flag=false;
    //     break;
    //     }
    // start++;
    // end --;
    // }

    // if(flag==true){
    //         cout<<"pallindrome"<<endl;
    //     }
    //     else{
    //         cout<<"Not Pallindrome"<<endl;
    //     }


    // -----------------------all zeroes in the front---------------


    // int arr[]={1,2,3,3,0,0,87,0,7,87,2,0};
    // int length= sizeof(arr) / sizeof(arr[0]);
    // int* newarr=new int[length];

    // int position=0;
    // for(int i=0;i<length;i++){
    //     if(arr[i]==0){
    //         newarr[position]=arr[i];
    //         position++;
    //     }
    // }
    // for(int i=0;i<length;i++){
    //     if(arr[i]!=0){
    //         newarr[position]=arr[i];
    //         position++;
    //     }
    // }
    // for(int i=0;i<length;i++){
    //     cout<<newarr[i]<<" ";
    // }
    // delete newarr;
    // ----------------------------------------------same question with two pointer--(when the orderv does not matter )--------------------

//     int arr[]={1,2,0,5,0,5,0,0,3,0};
        
    // int length= sizeof(arr) / sizeof(arr[0]);
   

//     int start =0;
//     int end= length-1;

//     while(start < end) {
//         if(arr[start]==0){
//         start++;
//         }
//         else if(arr[end]!=0){
//             end--;
//         }
//         else{
//             swap(arr[start],arr[end]);
//             start++;
//             end --;
//         }
    
//     }
// for(int i=0;i<length;i++){
//     cout<<arr[i]<<" ";
// }
// // ------------------------------------------------------------------array rotation-{left rotation}---------------------------

//     int arr[]={10,20,30,40,50};//-----------output {30,40,50,10,20}
//     int length= sizeof(arr) / sizeof(arr[0]);
   

//     //left rotation by 1 step
//     int tmp=arr[0];
//     for(int i=1;i<length;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[length-1]=tmp;

//     for(int i=0;i<length;i++){
//         cout<<arr[i]<<" ";
//     }


// ------------------------------------------------------------------array rotation-{right rotation}---------------------------

    // int arr[]={10,20,30,40,50};//-----------output {30,40,50,10,20}
    // int length= sizeof(arr) / sizeof(arr[0]);
   

    // //left rotation by 1 step
    // int tmp=arr[length-1];
    // for(int i=length-1;i>=0;i--){
    //     arr[i]=arr[i-1];
    // }
    // arr[0]=tmp;

    // for(int i=0;i<length;i++){
    //     cout<<arr[i]<<" ";
    // }

// ------------------------------left shift by k steps---(bruute force)------------------

    // int arr[]={10,20,30,40,50};//-----------output {30,40,50,10,20}
    // int length= sizeof(arr) / sizeof(arr[0]);
    // int steps;
    // cout<<"ENTER STEPS TO LEFT SHIFT: IT SHOULD BE LESS THAN "<<length<<" :";
    // cin>>steps;
   

    // //left rotation by 1 step
    // for(int k=0;k<steps;k++){
    //     int tmp=arr[0];
    //     for(int i=0;i<length-1;i++){
    //     arr[i]=arr[i+1];
    // }
    // arr[length-1]=tmp;

    // }
   
    // for(int i=0;i<length;i++){
    //     cout<<arr[i]<<" ";
    // }
// ----------------------------------------------------------------optimal solution -----------

    // int arr[]={10,20,30,40,50};//-----------output {30,40,50,10,20}
    // int length= sizeof(arr) / sizeof(arr[0]);
    // int steps;
    // cout<<"ENTER STEPS TO LEFT SHIFT: IT SHOULD BE LESS THAN "<<length<<" :";
    // cin>>steps;
    // reverse(arr, arr + steps);
    // reverse(arr + steps, arr + length);
    // reverse(arr, arr + length);

    // for(int i=0;i<length;i++){
    //     cout<<arr[i]<<" ";
    // }

// ----------------------------------------------------------two sum problem--(find all the points of the sum)----and if we do sort what are the orijinal index-------------------------


    // int arr[]={10,20,30,40,50,1,99,0,100,70,50};
    // int length= sizeof(arr) / sizeof(arr[0]);
    // sort(arr,arr+length);
    // int target=100;
    // int start=0;
    // int end=length-1;
    // while(start<end){
    //     int sum=arr[start]+arr[end];
    //     if(sum==target){
    //         cout<<arr[start]<< " "<<arr[end];
    //         cout<<endl;
    //         // break;
    //         start++;
    //         end--;
    //     }
    //     else if(sum<target){
    //         start++;
    //     }
    //     else{
    //         end--;
    //     }
    // }

//if we want to maintain the order of the array we have to use nestd loop O(N^2) time complexity;

// //by me -----
// (nlogn)
// int arr[]={10,0,4,13,6,0,394,48,-38,2,8,60};
// int length=sizeof(arr) / sizeof(arr[0]);
// int target=10;
// sort(arr,arr+length);
// int start=0;
// int end=length-1;
// while(start<end){
//     if(arr[start]+arr[end]==target){
//         cout<<"PAIRS: "<<arr[start]<<" , "<<arr[end];
//         cout<<endl;
//         start++;
//         end--;
//     }
//     else if(arr[start]+arr[end]<target){
//         start++;
//     }
//     else{
//         end--;
//     }
// }


// ------------------------------distinct pairs-----------------------
// O(nlogn)

// int arr[]={10,0,4,13,6,0,4,6,394,48,-38,2,8,60};
// int length=sizeof(arr) / sizeof(arr[0]);
// int target=10;
// sort(arr,arr+length);
// int start=0;
// int end=length-1;
// while(start<end){
//     if(arr[start]+arr[end]==target){
//         cout<<"PAIRS: "<<arr[start]<<" , "<<arr[end];
//         cout<<endl;
//         int currentstart=arr[start];
//         while(start<end && currentstart==arr[start]){
//             start++;
//         }
//         int currentend=arr[end];
//         while(start<end && currentend==arr[end]){
//             end--;
//         }
        
//     }
//     else if(arr[start]+arr[end]<target){
//         start++;
//     }
//     else{
//         end--;
//     }
// }


return 0;
}

