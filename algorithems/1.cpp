#include <iostream>
#include <array>
using namespace std;

// int find(int array[],int number){
//     for(int i=0;i<6;i++){
//         if(array[i]==number){
//             cout<<"found at index ";
//             return i ;
//         }
//     } return -1;   
// }

// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int number;
//     cin>>number;
//     int a=find(arr,number);
//     cout<<a;
// }


// ---------------------------------------------------------------------------

// int find(int array[]){
//     int total=0;
//     for(int i=0;i<6;i++){
//         total+=array[i];

//     }  
//     return total;
// }

// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     int a=find(arr);
//     cout<<a;
// }

// --------------------------------------------------------------------
int main(){
int arr1[3][3];
int arr2[3][3];
int arr3[3][3];

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr1[i][j];
    }
}


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr2[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<" ";
        cout<<arr3[i][j]<<" ";
    }
}

}