#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){


// //pair in c++


// int arr[]={10,20,30,40,50};
// int length=sizeof(arr)/sizeof(arr[0]);
// // pair<int ,string> p={1,"Hello"};
// // cout<<p.first<< " "<<p.second;


// vector<pair<int,int>> vec;
// for(int i=0;i<length;i++){
//     vec.push_back({arr[i],i});
// }

// for(auto p:vec){
//     cout<<"value: "<<p.first<<" "<<p.second<<endl;
// }
// -----------------------------------using pair to store indexes as well----------------------

    // int arr[]={10,20,30,40,50,1,99,0,100,70,50};
    // int length= sizeof(arr) / sizeof(arr[0]);

    // vector<pair<int,int>> vec;
    // for(int i=0;i<length;i++){
    //     vec.push_back({arr[i],i});
    // }
    // sort(vec.begin(),vec.end());

    // int target=100;
    // int start=0;
    // int end=length-1;
    // while(start<end){
    //     int sum=vec[start].first+vec[end].first;
    //     if(sum==target){
    //         cout<<"PAIR: "<<vec[start].first<< " "<<vec[end].first;
    //         cout<< " INDEX ARE "<<vec[start].second<<" "<<vec[end].second<<endl;
    //         // break;
    //          start++;
    //          end--;
    //     }
    //     else if(sum<target){
    //         start++;
    //     }
    //     else{
    //         end--;
    //     }
    // }
// ---------------------------------------------------------------------set------------------------------------
//unique and sorted arry of the set------------------
    // int arr[]={10,20,30,40,50,1,99,0,100,70,50};
    //  int length= sizeof(arr) / sizeof(arr[0]);
    //  set<int> s;
    //  for(int i=0;i<length;i++){
    //     s.insert(arr[i]);
    //  }
    // //  s.clear();
    //  int value=40;
    //  if(s.find(value)!=s.end()){
    //     cout<<"element found"<<endl;
    //  }
    //  else{
    //     cout<<"element not found"<<endl;
    //  }
    // //  for(int i:s){
    // //     cout<<i<<endl;
    // //  }

//----------------------unordered set------------------------
//O(1)--lookup poperation
    // int arr[]={10,20,30,40,50,1,99,0,100,70,50};
    //  int length= sizeof(arr) / sizeof(arr[0]);
    //  unordered_set<int> s;
    //  for(int i=0;i<length;i++){
    //     s.insert(arr[i]);
    //  }
    //  for(int i:s){
    //     cout<<i<<" ";
    //  }
// -----------------------------------------------map in c++---------------------------------


    // int arr[]={10,20,30,40,50,1,99,0,100,70,50};
    //  int length= sizeof(arr) / sizeof(arr[0]);
    // // map<int ,str> map1={{1,"one"},{2,"two"},{3,"three"}};
    // unordered_map<int,int> m;
    // for(int i=0;i<length;i++){
    //     m[i]=arr[i];
    // }
    // for(auto p:m){
    //     cout<<"index: "<<p.first<<" "<<"Value: "<<p.second<<endl;
    // }

//find the frequency of elements inside the array------------------------------------------





































    return 0;
}