// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <unordered_map>
// using namespace std;
// // -------------------------------------------finding the frequency of elements using sets--------------------
// // int main(){
// //     int arr[8]={1,3,4,1,1,3,2,2};
// //     int length=sizeof(arr)/sizeof(arr[0]);
// //     set<int> set1;
// //     for(int i=0;i<length;i++){
// //         set1.insert(arr[i]);
// //     }
// //     int count=0;
// //     for(int i:set1){
// //         for(int j=0;j<length;j++){
// //             if(i==arr[j]){
// //                 count++;
// //             }
// //         }
// //         cout<<i<<" Comes: "<<count<<" Times ";
// //         cout<<endl;
// //         count=0;
// //     }

// //     return 0;
// // }
// // ---------------------------------------using unordered set to find frequency of all elements----------------
// int main(){
//     int arr[15]={1,3,4,1,1,3,2,2,5,5,5,5,5,5,4};
//     int length=sizeof(arr)/sizeof(arr[0]);

//     unordered_map<int,int> map1;
//     for(int i=0;i<length;i++){
//          int value=arr[i];
//          if(map1.find(value)!= map1.end()){
//              map1[value]=map1[value]+1;
//          }
//          else{
//              map1.insert({value,1});
//          }
//         // map1[arr[i]]++;
//     }

//     for(auto& p:map1){
//         cout<<"Element "<<p.first<<"Frequency: "<<p.second<<endl;
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <array>
// #include <vector>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int length=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<length;i++){
//         for(int j=i;j<length;j++){
//            for(int k=i;k<=j;k++){
//             cout<<arr[k]<<" ";
//            }
//            cout<<endl;
//         }
        
//     }
//     return 0;
// }
// -------------------------------------------------28/07/2025-----------------------------------

// #include <iostream>
// #include <vector>
// #include <array>
// #include <string>
// #include <algorithm>

// using namespace std;
// int main(){
// //subsets at level 3----
// vector<int> arr={1,2,3,4,5,5,6,6,7,7,8,8};
// int k=3;
// for(int i=0;i<arr.size();i++){
//     vector<int> temp;
//     for(int j=i;j<arr.size();j++){
//         temp.push_back(arr[j]);
//         if(temp.size()==k){
//             for(int iterator=0;iterator<k;iterator++){
//                 cout<<temp[iterator]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// }
//     return 0;
// }
// ---------------------------max sum subarray's size whose sum is less than k--------------------------
// #include <iostream>
// #include <vector>
// #include <array>
// #include <string>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//     vector<int> arr={-1,2,-3,-6,5,-6,-7,8,9,-10};
//     int k=5;
//     int maxlength=0;
//     for(int i=0;i<arr.size();i++){
//         int sum=0;
//         for(int j=i;j<arr.size();j++){
//             sum+=arr[j];
//             if(sum>k){
//             int length=j-i+1;
//             maxlength=max(maxlength,length);
//             }
//         }
//     }
//     cout<<maxlength<<endl;
//     return 0;
// }
// --------------------------------------maximum subarray sum-------------------------

// #include <iostream>
// #include <vector>
// #include <array>
// #include <string>
// #include <algorithm>
// #include <climits>
// using namespace std;
// int main(){
//     vector<int> arr={99,1,1,1,1,1,1,1,1,1,-991};
//     int currentmax=0;
//     int maximum=INT_MIN;
//     for(int i=0;i<arr.size();i++){
//         currentmax+=arr[i];
//         maximum=max(maximum,currentmax);
//         if(currentmax<0){
//             currentmax=0;
//         }
//     }
//     cout<<"Maximum subarray sum: "<<maximum<<endl;



//     return 0;
// }
// -----------------------------kobane's approach and shit--------------------------------


// ---------------------------------------------------------------------------------------
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main(){
//     vector<int> arr = {99,1,1,1,1,1,1,1,1,1,-991};
//     int currentmax = 0;
//     int maximum = INT_MIN;

//     // First pass: Kadane's to find max sum
//     for (int i = 0; i < arr.size(); i++) {
//         currentmax += arr[i];
//         maximum = max(maximum, currentmax);
//         if (currentmax < 0) currentmax = 0;
//     }

//     cout << "Maximum subarray sum: " << maximum << endl;

//     // Second pass: Find subarray that gives that sum
//     for (int i = 0; i < arr.size(); i++) {
//         int sum = 0;
//         for (int j = i; j < arr.size(); j++) {
//             sum += arr[j];
//             if (sum == maximum) {
//                 cout << "Subarray: ";
//                 for (int k = i; k <= j; k++) {
//                     cout << arr[k] << " ";
//                 }
//                 cout << endl;
//                 return 0;
//             }
//             if (sum > maximum) break;
//         }
//     }

//     return 0;
// }

// --------------------------------binary search----------------------------------------

// #include <iostream>
// #include <array>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,3,4,5,6,6,7,8,9,10,11,11,11,11,20,30,40,50,60};
//     int target=11;
//     int low=0;
//     int high=arr.size()-1;
//     int result=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(target==arr[mid]){
//             result=mid;
//             break;
//         }
//         else if(target>=arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<result;



//     return 0;
// }

// -----------------------------merge two arrays from end---------

    // #include <iostream>
    // #include <vector>
    // using namespace std;
    // int main(){
    //     vector<int> arr1={1,1,1,1,2,3,4,4,5};
    //     vector<int> arr2={2,4};
    //     vector<int> temp;
    //     for(int i=0;i<arr1.size();i++){
    //         temp.push_back(arr1[i]);
    //         if(arr2.size()>i){
    //             temp.push_back(arr2[i]);
    //         }
    //     }
    // for(int i=0;i<temp.size();i++){
    //     cout<<temp[i]<<" ";
    // }

    //     return 0;
    // }

    //------------------longest subarray with sum less than k-------brute force----

    // #include <iostream>
    // #include <vector>
    // #include <algorithm>
    // using namespace std;
    // int main(){
    //     vector<int> arr={1,2,3,4,5,6,6,7,8,9,10,11,11,11,11,20,30,40,50,60};
    //     int k=30;
    //     int maxlength=0;
    //     for(int i=0;i<arr.size();i++){
    //         vector<int> temp;
    //         int sum=0;
    //         for(int j=i;j<arr.size();j++){
    //             temp.push_back(arr[j]);
    //             sum+=arr[j];
                
    //             if(sum<k){
    //                 maxlength=max(maxlength,int(temp.size()));
    //             }
    //         }
            
            
    //     }
    // cout<<maxlength;


    //     return 0;
    // }

//-------------maximum water problem---------------------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int> arr={1, 8, 6, 2, 5, 4, 8, 3, 7};
//     int low=0;
//     int high=arr.size()-1;
//     int maxarea=0;
//     while(low<=high){
//         int area=min(arr[low],arr[high])*(high-low);
//         if(arr[low]<arr[high]){
//             low++;
//         }
//         else{
//             high--;
//         }
//         maxarea=max(maxarea,area);

//     }
//     cout<<maxarea;


//     return 0;
// }
//---------------------binary search again---------------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int> arr={1,2,3,4,4,5,5,7,10,14,19,30,45,50};
//     int target=191;
//     int low=0;
//     int high=arr.size()-1;
    
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             cout<<mid<<" th index";
//             break;
//         }
//         else if(target>=arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<"not found";

//     return 0;
// }
//==================================left most occurance =================================================

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int> arr={1,2,3,4,4,5,5,7,10,14,19,30,45,50};
//     int target=4;
//     int low=0;
//     int high=arr.size()-1;
//     int result=-1;
    
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             result=mid;
//             high=mid-1;
            
//         }
//         else if(target>=arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     cout<<result;

//     return 0;
// }
// -------------to find the rightmost value-------------------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){

//     vector<int> arr={1,2,3,4,4,4,4,5,5,7,10,14,19,30,45,50};
//     int target=41;
//     int low=0;
//     int high=arr.size()-1;
//     int result=-1;
    
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             result=mid;
//             low=mid+1;
            
//         }
//         else if(target>=arr[mid]){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     if(result==-1){
//         cout<<"not found";
//     }
//     else{
//         cout<<result;
//     }


//     return 0;
// }
//---------------------find the longest palindromic substring---------------------------------------

// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int maxlength=0;
//     string str="babad";
//     string longest="";
//     for(int i=0;i<str.length();i++){
//         string temp="";
//         for(int j=i;j<str.length();j++){
//             temp+=str[j];
//             string newstr=temp;
//             reverse(newstr.begin(),newstr.end());
//             if(newstr==temp && temp.length()>maxlength){
//                maxlength=temp.length();
//                longest=temp;
//             }
            
//         }
//     }
//     cout<<longest;


//     return 0;
// }

// ------------------------------------find fibo, pwer of a number a^b,factorial -------------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//  int factorial(int num){
//     if(num==0){
//     return 1;
//     }
//     else{
//         return num*factorial(num-1);
//     }
//  }

// int main(){
//   int a= factorial(3);
//   cout<<a;
//     return 0;
// }
// -----------------fibonacci series using recursion------------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//  void fibo(int num){
//     static int a=0,b=1,count=0;
//     if(count>num){
//         return;
//     }
//     cout<<a<<" ";
//     int next=a+b;
//     a=b;
//     b=next;
//     count++;
//     fibo(num);
//  }

// int main(){
//   fibo(10);
//     return 0;
// }
// ---------------------pwer of a number a^b-------------

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//  int square(long long  num,long long  power){
//     int count=0;
//     if(power==0){
//        return 1;
//     }
//     else{
//         return num*square(num,power-1);
//     }
//  }

// int main(){
//   long long  a=square(2.5,20);
//   cout<<a;
//     return 0;
// }

// ------------------------------merge sort ----------------------

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> arr1={1,3,5,7,9,10,11,12};
//     vector<int> arr2={0,2,4,6,8,10,11,12,12,13,14,15};
//     vector<int> temp;
    // int i=0;
    // int j=0;
    // while(i<arr1.size() && j<arr2.size()){
    //     if(arr1[i]<arr2[j]){
    //         temp.push_back(arr1[i]);
    //         i++;
    //     }
    //     else{
    //         temp.push_back(arr2[j]);
    //         j++;
    //     }
    // }
    // while(i<arr1.size()){
    //     temp.push_back(arr1[i]);
    //     i++;
    // }
    // while(j<arr2.size()){
    //     temp.push_back(arr2[j]);
    //     j++;
    // }
    // for(auto k:temp){
    //     cout<<k<<" ";
    // }
//     return 0;
// }
//-----------------------------------------------------------------------st1 tyari--------------

// --------------------------bubble sort---------------------

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> arr={22,10,30,41,5,19,0};

//     for(int i=0;i<arr.size()-1;i++){
//         for(int j=0;j<arr.size()-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
        
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



// -----------------------------selection sort code----------------------

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> arr={22,10,30,41,5,19,0};

//     for(int i=0;i<arr.size();i++){
//         int minimum_index=i;
//         for(int j=i+1;j<arr.size();j++){
//             if(arr[j]<arr[minimum_index]){
//                 minimum_index=j;
//             }
//         }
//         int temp=arr[minimum_index];
//         arr[minimum_index]=arr[i];
//         arr[i]=temp;
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// --------------------insertion sort --------------

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr={10,15,3,28,2,15,0};
//     for(int i=1;i<arr.size();i++){
//         int key=arr[i];
//         int j=i-1;
//         while(i>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//---------------------------binary searching---------------------------
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){

//     vector<int> arr={1,2,12,9,45,2,0,8,7};
//     sort(arr.begin(),arr.end());

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" "<<endl;
//     }

//     int target=7;
//     int low=0;
//     int high=arr.size()-1;

//     while(low<high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target){
//             cout<<"found at : "<<mid;
//             break;
//         }
//         else if(target>mid){
//             low++;
//         }
//         else{
//             high--;
//         }

//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr1={10,9,8,7,6,5,4,3,2,1};
//     sort(arr1.begin(),arr.end());
//     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// ----------------------------------linked list-----------------------

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// class LinkedList{
//     private:
//     Node* head;
//     Node* tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }

//     void insertAtbegin(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             newnode->next=head;
//             head=newnode;
//         }
//         size++;
//     }
//     void display(){
//         if(head==NULL){
//             cout<<"empty string";
//         }
//         else{
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//         }
//     }

// };
// int main(){

//     LinkedList l1;
//     l1.insertAtbegin(5);
//     l1.display();

//     return 0;
// }
// -----------------------------------linked list revision--------------------
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next-NULL;
//     }

// };
// class Linkedlist{
//     private:
//     Node* head;
//     Node* tail;
//     int size;

//     public:
//     Linkedlist(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }

//     void toaddinfront(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }  
//         else{
//             newnode->next=head;
//             head=newnode;
//         }
//         size++;
//     }

//     void toputatlast(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//         size++;
//     }

//     void mydisplay(){
//         if(head==NULL){
//             cout<<"Empty list "<<endl;
//         }
//         else{
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//         }
//     }

//     void getsize(){
//         cout<<"size is: "<<size<<endl;
//     }

//     int getindex(int value){
//         Node* temp=head;
//         int count=0;
//         while(temp!=NULL){
//             if(temp->data==value){
//                 return count;
//             }
//             else{
//                 temp=temp->next;
//                 count++;
//             }
//         }
//         return -1;
//     }


// };


// int main(){

//     Linkedlist l1;
//     l1.toaddinfront(50);
//     l1.toaddinfront(100);
//     l1.toaddinfront(220);
//     l1.toputatlast(1000);
//     l1.toputatlast(10);
//     l1.mydisplay();
//     cout<<endl;
//     l1.getsize();
//     int a=l1.getindex(100);
//     cout<<"Index: "<<a<<endl;

//     return 0;
// }

// -------------ll-----the complete solution--------

// #include <iostream>
// using namespace std;


// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// class LinkedList{
//     private:
//     Node* head;
//     Node* tail;
//     int size;
//     public:
//     LinkedList(){
//         head=NULL;
//         tail=NULL;
//         size=0;
//     }

//     void addtofirst(int value){
//         Node* newnode=new Node(value);
//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             newnode->next=head;
//             head=newnode;
//         }

//         size++;
//     }


//     void addtolast(int value){
//         Node* newnode=new Node(value);

//         if(head==NULL){
//             head=tail=newnode;
//         }
//         else{
//             tail->next=newnode;
//             tail=newnode;
//         }
//         size++;
//     }

//     void display(){
//         if(head==NULL){
//             cout<<"List is empty "<<endl;
//             return;
//         }
//         else{
//             Node* temp=head;
//             while(temp!=NULL){
//                 cout<<temp->data<<" ";
//                 temp=temp->next;
//             }
//         }
//     }
//     int getindex(int value){
//         Node* temp=head;
//         int count=0;
//         while(temp!=NULL){
//             if(temp->data==value){
//                 return count;
//             }
//             else{
//                 temp=temp->next;
//                 count++;
//             }
//         }
//         return -1;
        

//     }
//     void deletefirst(){
//         if(head==NULL){
//             cout<<"List is already empty ";
//         }
//         else if(head==tail){
//             delete head;
//             head=tail=NULL;
//         }
//         else{
//             head=head->next;
//             delete head;
//             size--;
//         }
//     }

//     void deletelast(){
//         if(head==NULL){
//             cout<<"List is already empty ";
//         }
//         else if(head==tail){
//             delete head;
//             head=tail=NULL;
//         }
//         else{
//             Node* temp=head;
//             while(temp->next!=tail){
//                 temp=temp->next;
//             }
//             delete tail;
//             size--;
//             tail=temp;
//             tail->next=NULL;
//         }
//     }

//     void displaysize(){
//         cout<<"size: "<<size;
//     }




// };




// int main(){

//     LinkedList l1;
//     l1.addtofirst(50);
//     l1.addtofirst(100);
//     l1.addtolast(596);
//     l1.addtolast(202);
//     l1.display();
//     cout<<endl;
//     int a=l1.getindex(50);
//     cout<<a<<endl;
//     l1.deletefirst();
//     l1.deletelast();
//     l1.display();
//     cout<<endl;
//     l1.displaysize();

//     return 0;
// }

// -----------------------to count char in string-----------------

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    map<char,int> freq;

    for(char c: str){
        freq[c]++;
    }
    string newstr;

    for(auto p: freq){
        newstr+=p.first;
        newstr+=to_string(p.second);
    }
    cout<<newstr;

    return 0;
}