#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;


int main(){
    // int arr[]={10,20,30,40,50,50,50,50,50,20,20,1,10,10};
    // int length=sizeof(arr)/sizeof(arr[0]);
    
// --------------------using unordered set to find frequency of all elements----------------
    // unordered_map<int,int> map1;
    // for(int i=0;i<length;i++){
    //     // int value=arr[i];
    //     // if(map1.find(value)!= map1.end()){
    //     //     map1[value]=map1[value]+1;
    //     // }
    //     // else{
    //     //     map1[value]=1;
    //     // }
    //     map1[arr[i]]++;
    // }

    // for(auto& p:map1){
    //     cout<<"Element "<<p.first<<"Frequency: "<<p.second<<endl;
    // }
// -----------------------------

    // int arr[][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    //column major order-----------representation----
    // int rows=sizeof(arr)/sizeof(arr[0]);
    // int cols=sizeof(arr[0])/sizeof(arr[0][0]);
    //  for(int i=0;i<cols;i++){
    //     for(int j=0;j<rows;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //  }

    //sparce matris-----------most of the elements are zero--------------

    //1.using Triplets --COO representation----Coordinate list
    //2.CSR--Compressed Sparce Row.
    //3.CSC--Compressed Sparce Columns

//1.COO representation
// int arr[][4]={
//         {0,0,1,0},
//         {0,2,0,0},
//         {0,3,4,0}
//     };


//     int rows=sizeof(arr)/sizeof(arr[0]);
//     int cols=sizeof(arr[0])/sizeof(arr[0][0]);

//     // int triplematrix=[][];
//     int non_zero=0;

//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            if(arr[i][j]!=0){
//             non_zero++;
//            }
//         }
//      }
//      int triplematrix[non_zero][3];

//      int idx=0;

//      for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//            if(arr[i][j]!=0){
//             triplematrix[idx][0]=i;
//             triplematrix[idx][1]=j;
//             triplematrix[idx][2]=arr[i][j];
//             idx++;
//            }
//         }
//      }
//      for(int i=0;i<non_zero;i++){
//         cout<<triplematrix[i][0]<<" "<<triplematrix[i][1]<<" "<<triplematrix[i][2]<<endl;
//      }
// ----------------------------------------------------------------------------


// // 🧩 Triplet to store non-zero values
// struct Triplet {
//     int row;
//     int col;
//     int value;
// };

// // 🚀 Converts sparse matrix to triplet representation
// void convertToTriplet(const vector<vector<int>>& matrix) {
//     vector<Triplet> triplets;
    
//     int numRows = matrix.size();
//     int numCols = matrix[0].size();

//     for (int i = 0; i < numRows; ++i) {
//         for (int j = 0; j < numCols; ++j) {
//             if (matrix[i][j] != 0) {
//                 triplets.push_back({i, j, matrix[i][j]});
//             }
//         }
//     }

//     // 📊 Display the triplet list
//     cout << "Row\tCol\tValue\n";
//     for (const Triplet& t : triplets) {
//         cout << t.row << "\t" << t.col << "\t" << t.value << "\n";
//     }
// }


//     vector<vector<int>> sparseMatrix = {
//         {1, 0, 0, 2},
//         {0, 0, 3, 0},
//         {0, 0, 5, 0},
//     };

//     convertToTriplet(sparseMatrix);

// --------------convert the triplet representation to the orijinal sparce matrix-----HW------------------------

//2.CSR- compressed sparce row------------------

    int arr[4][5]= {
    {0,0,3,0,4},
    {0,0,5,7,0},
    {0,0,0,0,0},
    {0,2,6,0,0}
    };
//1.values[]
//2.col_index[]
//3.row_ptr[]

vector<int> values;
vector<int> col_index;
vector<int> row_ptr;
row_ptr.push_back(0);
int non_zero=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]!=0){
                values.push_back(arr[i][j]);
                col_index.push_back(j);
                non_zero++;
            }
            
        }
        row_ptr.push_back(non_zero);
    }
    cout<<"values : "<<endl;

    for(int i=0;i<values.size();i++){
        cout<<values[i]<<" ";
    }
    cout<<endl;
    cout<<"Col_index : "<<endl;
     for(int i=0;i<col_index.size();i++){
        cout<<col_index[i]<<" ";
    }
    cout<<endl;
    cout<<"row_ptr : "<<endl;
     for(int i=0;i<row_ptr.size();i++){
        cout<<row_ptr[i]<<" ";
    }
    cout<<endl;
    int row_value=1;
    int start=row_ptr[row_value];
    int end=row_ptr[row_value+1];
    for(int i=start;i<end;i++){
        cout<<"Row number: "<<row_value<<" Value:"<<values[i]<<" column:"<<col_index[i]<<endl;
    }

    return 0;
}
