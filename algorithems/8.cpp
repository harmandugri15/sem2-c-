//sparce matris-----------most of the elements are zero--------------
//1.using Triplets --COO representation----Coordinate list
//2.CSR--Compressed Sparce Row.
//3.CSC--Compressed Sparce Columns
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <map>
using namespace std;

// struct Triplet {
//     int row, col, value;
// };

// // Converts 2D matrix to triplet representation
// vector<Triplet> getTripletMatrix(vector<vector<int>>& matrix) {
//     vector<Triplet> result;
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             if(matrix[i][j] != 0) {
//                 result.push_back({i, j, matrix[i][j]});
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     vector<vector<int>> v = {
//         {0, 0, 0, 0, 1},
//         {0, 2, 0, 0, 3},
//         {0, 0, 0, 0, 0},
//         {0, 4, 0, 5, 0}
//     };

//     // Triplet representation-----------------------------------------
//     cout<<"Row Column Value"<<endl;
//     vector<Triplet> vec = getTripletMatrix(v);
//     for (auto& t : vec) {
//         cout << "{ "<<t.row << " , " << t.col << " , " << t.value <<" }"<< endl;
//     }

//     cout << "ORIGINAL MATRIX" << endl;

//     // 🛠️ ADDED DECLARATIONS: maxrow and maxcol need to be declared
//     int maxrow = 0, maxcol = 0;
    
//     // Calculate max dimensions from triplets
//     for(auto& t : vec){
//         maxrow = max(maxrow, t.row);
//         maxcol = max(maxcol, t.col);
//     }

//     int rows = maxrow + 1;
//     int cols = maxcol + 1;

//     // Build matrix with correct dimensions
//     vector<vector<int>> rebuild(rows, vector<int>(cols, 0));

//     // Restore values using triplets
//     for(auto& t : vec){
//         rebuild[t.row][t.col] = t.value;
//     }

//     // 🔧 FIXED TYPO: changed 'rebuid' to 'rebuild' for correct printing
//     for(auto& row : rebuild){
//         for(auto& val : row){
//             cout << val << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// ------------------------------------------------CSR-----------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// // 🧠 Converts a dense matrix to Compressed Sparse Row (CSR) format
// void processCSR(vector<vector<int>>& matrix, vector<int>& values, vector<int>& col_index, vector<int>& row_ptr) {
//     int rows = matrix.size();
//     int cols = matrix[0].size(); // 🔧 Correctly fetch column count from first row
//     row_ptr.push_back(0);        // CSR starts with 0

//     int non_zero_count = 0;

//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             if(matrix[i][j] != 0) {
//                 values.push_back(matrix[i][j]);     // Push value
//                 col_index.push_back(j);             // Push its column index
//                 non_zero_count++;
//             }
//         }
//         row_ptr.push_back(non_zero_count);          // Push updated count for each row
//     }
// }

// int main() {
//     // 🌱 Input matrix
//     vector<vector<int>> v = {
//         {0, 0, 0, 0, 1},
//         {0, 2, 0, 0, 3},
//         {0, 0, 0, 0, 0},
//         {0, 4, 0, 5, 0}
//     };

//     // 🌾 CSR containers
//     vector<int> values;
//     vector<int> col_index;
//     vector<int> row_ptr;

//     // 🎯 Encode matrix to CSR
//     processCSR(v, values, col_index, row_ptr);

//     // 🖨️ Print CSR components
//     cout << "Values:" << endl;
//     for(int val : values) cout << val << " ";
//     cout << "\nColumns:" << endl;
//     for(int col : col_index) cout << col << " ";
//     cout << "\nRow Pointers:" << endl;
//     for(int ptr : row_ptr) cout << ptr << " ";

//     cout << "\n\n🔄 Reconstructing original matrix from CSR format..." << endl;

//     // 🔍 Determine reconstructed matrix dimensions
//     int rows = row_ptr.size() - 1; // Number of rows
//     int maxcols = 0;
//     for(auto& i : col_index) maxcols = max(maxcols, i);
//     int cols = maxcols + 1;

//     // 🏗️ Initialize matrix
//     vector<vector<int>> rebuild(rows, vector<int>(cols, 0));

//     // 🧩 Decode CSR back to full matrix
//     for(int i = 0; i < rows; i++) {
//         int start = row_ptr[i];
//         int end = row_ptr[i + 1];

//         for(int k = start; k < end; k++) {
//             int val = values[k];
//             int col = col_index[k];
//             rebuild[i][col] = val; // Place value at correct position
//         }
//     }

//     // 🖨️ Print reconstructed matrix
//     cout << "\nOriginal Matrix:" << endl;
//     for(auto& row : rebuild) {
//         for(int v : row) {
//             cout << v << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// -------------------------------=-------------------------CSC--------------------------------------------------
// --rotate 2d array with 90 degrees
// -- transpose the array and than reverse the rows