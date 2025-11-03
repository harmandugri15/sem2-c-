//----------------------quick sort ------------
// #include <iostream>
// #include <vector>

// using namespace std;

// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high]; // Choose last element as pivot
//     int i = low - 1; // Index of smaller element
//     for (int j = low; j < high; j++) {
//         if (arr[j] <= pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1; // Pivot's final position
// }

// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1); // Sort left
//         quickSort(arr, pi + 1, high); // Sort right
//     }
// }

// int main() {
//     vector<int> arr = {64, 34, 25, 12, 22};
//     quickSort(arr, 0, arr.size() - 1);
//     cout << "Sorted array: ";
//     for (int num : arr) cout << num << " ";
//     cout << endl;
//     return 0;
// }


//-------------------sir's method------------------if we pass a sorted array than it will be in O(n^2)-----------

// #include <iostream>
// #include <vector>
// using namespace std;

// int paritition(vector<int> &vec, int start, int end)
// {
//     int pivotel = vec[start];
//     int i = start + 1;
//     for (int j = start + 1; j <= end; j++)
//     {
//         if (vec[j] < pivotel)
//         {
//             swap(vec[i], vec[j]);
//             i++;
//         }
//     }
//     swap(vec[start], vec[i - 1]);
//     return i - 1;
// }

// void quicksort(vector<int> &vec, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int pivotIndex = paritition(vec, start, end);
//     quicksort(vec, start, pivotIndex - 1);
//     quicksort(vec, pivotIndex + 1, end);
// }
// int main()
// {

//     vector<int> vec = {7, 8, 1, 3, 1, 5, 6, 4};
//     int start = 0;
//     int end = vec.size() - 1;

//     quicksort(vec, start, end);

//     for (auto i : vec)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }
//------------to prevent this we should use random number as pivot and than swap it with the first---------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// int paritition(vector<int> &vec, int start, int end)
// {
//     int randomIndex=rand() % (end-start +1) + start;
//     swap(vec[start],vec[randomIndex]);

//     int pivotel = vec[start];
//     int i = start + 1;
//     for (int j = start + 1; j <= end; j++)
//     {
//         if (vec[j] < pivotel)
//         {
//             swap(vec[i], vec[j]);
//             i++;
//         }
//     }
//     swap(vec[start], vec[i - 1]);
//     return i - 1;
// }

// void quicksort(vector<int> &vec, int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }
//     int pivotIndex = paritition(vec, start, end);
//     quicksort(vec, start, pivotIndex - 1);
//     quicksort(vec, pivotIndex + 1, end);
// }
// int main()
// {

//     vector<int> vec = {7, 8, 1, 3, 1, 5,5,5,99, 6, 4};
//     int start = 0;
//     int end = vec.size() - 1;

//     quicksort(vec, start, end);

//     for (auto i : vec)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// --------------------------lamudo partition scheme ----------------