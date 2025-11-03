// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Node {

// public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// vector<int> levelOrder(Node* root) {
//     vector<int> result;

//     if (root == NULL) 
// 		return result;

//     queue<Node*> q;

//     q.push(root);

//     while (!q.empty()) {
//         Node* temp = q.front();
//         q.pop();
//         result.push_back(temp->data);
        
//         if (temp->left != NULL){
//             q.push(temp->left);
//         } 
//         if (temp->right != NULL){
//             q.push(temp->right);
//         }
//     }
//     return result;
// }

// // Example usage
// int main() {
//     //making of the tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->right = new Node(6);
    

//     vector<int> answer = levelOrder(root);

//     cout << "elements of vector are :: ";
//     for (int x : answer) cout << x << " ";
//     cout << endl;
// }


// // -------------------------------to represent a tree in an array -------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int tree[] = {20, 10, 30, 6, 21, 4, -1, 3, 8};

//     int n= sizeof(tree) / sizeof(tree[0]);

//     cout << "Node\tLeft Child\tRight Child\n";
//     for (int i = 0; i < n; i++) {
	
//         if (tree[i] == -1) 
// 		continue; 


//         int leftIndex = 2*i + 1;
//         int rightIndex = 2*i + 2;


//         cout << tree[i] << "\t";

//         if (leftIndex < n && tree[leftIndex] != -1)
//             cout << tree[leftIndex] << "\t\t";
//         else
//             cout << "NULL\t\t";


//         if (rightIndex < n && tree[rightIndex] != -1)
//             cout << tree[rightIndex] << "\n";
//         else
//             cout << "NULL\n";
//     }

//     return 0;
// }


// int tree[] = {20, 10, 30, 6, 21, 4, -1, 3, 8};
 

// -------------------------given an array build the tree--------------------


// #include <iostream>
// #include <vector>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// // Function to build tree from level-order array
// Node* buildTreeFromArray(vector<int>& arr, int i) {
//     if (i >= arr.size()) 
// 	return NULL;

//     Node* root = new Node(arr[i]);

//     root->left = buildTreeFromArray(arr, 2 * i + 1);
//     root->right = buildTreeFromArray(arr, 2 * i + 2);

//     return root;
// }

// // Preorder traversal to verify
// void preorder(Node* root) {
//     if (root == NULL) return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int main() {
//     vector<int> arr = {20, 10, 30, 6, 21, 4, 3, 8};

//     Node* root = buildTreeFromArray(arr, 0);

//     cout << "Preorder traversal of the tree: ";
//     preorder(root);
//     cout << endl;

//     return 0;
// }


