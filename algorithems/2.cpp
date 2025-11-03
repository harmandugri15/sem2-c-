#include <iostream>
#include <vector>
#include <array>
using namespace std;
vector<vector<int>> sumofarr(vector<vector<int>> arr1,vector<vector<int>> arr2,int n){
    vector<vector<int>> newarr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            newarr[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    return newarr;
}
int main(){
vector<vector<int>> arr1={
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
vector<vector<int>> arr2={
    {11,22,31},
    {41,51,61},
    {71,81,91}
};
vector<vector<int>> a=sumofarr(arr1,arr2,3);
for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size();j++){
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}