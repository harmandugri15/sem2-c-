#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str) {
    int left = 0;
    int right = str.size() - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }

    return true;
}


int main(){

    //to print all the subarray of the array n(n+1)/2 numbers of array will be there
    
    // vector<int> arr={1,2,3,4,5};
    // for (int i = 0; i < arr.size(); i++) {
    //     for (int j = i; j < arr.size(); j++) {
    //         for (int k = i; k <= j; k++) {
    //             cout << arr[k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    //alternate approach-------------------

    // vector<int> arr={1,2,3,4,5};
    // for (int i = 0; i < arr.size(); i++) {
    //     vector<int> temp;
    //     for (int j = i; j < arr.size(); j++) {
    //         temp.push_back(arr[j]);
    //         for(int x:temp){
    //             cout<<x<<" ";
    //         }
    //     }
    //      cout << endl;
    // }
// -----------------------------substring usage---O(n^2)-----------------

    // string a="masai";
    
    // for (int i = 0; i < a.size(); i++) {
    //     string emptystring="";
    //     for (int j = i; j < a.size(); j++) {
    //         emptystring+=(a[j]);
    //         cout<<emptystring<<" ";
    //     }
    //      cout << endl;
    // }

// -------------------count substring starting with vowel----------

    // string a="masai";
    // int count=0;
    // for (int i = 0; i < a.size(); i++) {
    //     string emptystring="";
        
    //     for (int j = i; j < a.size(); j++) {
    //         emptystring+=(a[j]);
    //         if(emptystring[0]=='a' || emptystring[0]=='e'||emptystring[0]=='i'||emptystring[0]=='o'||emptystring[0]=='u'){
    //             count++;
    //         }
    //     }
    // }
    // cout << count;

    // --------------------using alternate approach ---to calculate the number of substrings that start from a vowel-------------------

    // string a="masai";
    // int count=0;
    // for (int i = 0; i < a.size(); i++) {
    //         if(a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
    //             count+=(a.size()-i);
    //         }
    // }
    // cout << count;

    // ----------------------------sum of each subarray--------
    
    //  vector<int> arr={1,2,3,4,5};
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
    // -----------------alternate way------------

    // vector<int> arr = {1, 2, 3, 4}; // Example array, you can change values
    // for (int i = 0; i < arr.size(); i++) {
    //     int sum = 0;
    //     for (int j = i; j < arr.size(); j++) {
    //         sum += arr[j];
    //         cout << sum << " ";
    //     }
    //     cout << endl;
    // }

    // --------------------to print the length of largest pallindrome subset---------------
    
    //  string s = "thisracecarisgood";
    // // output 7 (longest palindromic substring = "racecar")

    // int result = 0;

    // for (int i = 0; i < s.size(); i++) {
    //     string temp = "";

    //     for (int j = i; j < s.size(); j++) {
    //         temp += s[j];

    //         if (isPalindrome(temp)) {
    //             int length = temp.size();
    //             if (length > result) {
    //                 result = length;
    //             }
    //         }
    //     }
    // }

   

    return 0;
}