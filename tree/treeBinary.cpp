// // binary search tree---does not support duplicates

// #include <iostream>
// #include <array>
// using namespace std;

// class Node
// {
// public:
//     int value;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         value = val;
//         left = right = nullptr;
//     }
// };

// Node *insertBST(Node *root, int value)
// {
//     if (root == NULL)
//     {
//         return new Node(value);
//     }
//     if (value < root->value)
//     {
//         root->left = insertBST(root->left, value);
//     }
//     else if (value > root->value)
//     {
//         root->right = insertBST(root->right, value);
//     }
//     return root;
// }

// void printinorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     printinorder(root->left);
//     cout << root->value << " ";
//     printinorder(root->right);
// }

// bool findIterative(Node *root, int k)
// {
//     while (root != nullptr)
//     {
//         if (root->value == k)
//         {
//             return true;
//         }
//         else if (root->value > k)
//         {
//             root = root->left;
//         }
//         else
//         {
//             root = root->right;
//         }
//     }
//     return false; // Return false if the loop exits (key not found)
// }

// // -------------------------------------------------------------
// void givemin(Node *node)
// {
//     Node *current = node;
//     if (node == nullptr)
//     {
//         return;
//     }
//     while (current->left != nullptr)
//     {
//         current = current->left;
//     }
//     cout << current->value;
// }

// bool validBST(Node *root, int minval = INT_MIN, int maxval = INT_MAX)
// {
//     if (root == nullptr)
//     {
//         return true;
//     }
//     if (root->value <= minval || root->value >= maxval)
//     {
//         return false;
//     }
//     return validBST(root->left, minval, root->value) && validBST(root->right, root->value, maxval);
// }

// // -----------find using recursive-----------

// // bool findRecursive(Node *root, int val)
// // {
// //     if (root == NULL)
// //         return false;

// //     if (root->value == val)
// //         return true;

// //     else if (val < root->value)
// //         return findRecursive(root->left, val);

// //     else
// //         return findRecursive(root->right, val);
// // }

// int main()
// {
//     //----------------------------------------------------
//     Node *root = nullptr;
//     int val[] = {3, 6, 8, 10, 15, 20, 25, 30, 35};
//     for (int i : val)
//     {
//         root = insertBST(root, i);
//     }
//     printinorder(root);
//     cout << endl;
//     // -------------------------------------------------------
//     if (findIterative(root, 15))
//     {
//         cout << "found" << endl;
//     }
//     else
//     {
//         cout << "not found" << endl;
//     }
//     //----------------------------------------------------------
//     // to print the minimum of te tree----------
//     givemin(root);
//     cout<<endl;
//     //---------------------------------------------------

//     if (validBST(root))
//     {
//         cout << "valid" << endl;
//     }
//     else
//     {
//         cout << "not valid" << endl;
//     }

//     return 0;
// }



// ----------------------------to delete  a node--------------
