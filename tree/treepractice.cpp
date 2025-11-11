// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int data)
//     {
//         this->data = data;
//         left = right = nullptr;
//     }
// };
// class Tree
// {
// public:
//     Node *root;
//     Tree()
//     {
//         root = nullptr;
//     }

//     bool find(Node *a, int value)
//     {
//         if (a == nullptr)
//         {
//             return false;
//         }
//         else if (a->data == value)
//         {
//             return true;
//         }
//         return find(a->left, value) || find(a->right, value);
//     }
// };

// int main()
// {
//     Tree t1;
//     t1.root = new Node(0);
//     t1.root->left = new Node(1);
//     t1.root->right = new Node(2);
//     t1.root->left->left = new Node(3);
//     t1.root->left->right = new Node(4);
//     t1.root->right->left = new Node(5);
//     t1.root->right->right = new Node(5);

//     cout << "root" << endl;
//     cout << t1.root->data << endl;
//     cout << t1.root->left->data << endl;
//     cout << t1.root->right->data << endl;
//     cout << t1.root->left->left->data << endl;
//     cout << t1.root->left->right->data << endl;

//     bool a = t1.find(t1.root, 3);

//     if (a == true)
//     {
//         cout << "found" << endl;
//     }
//     else
//     {
//         cout << "not found" << endl;
//     }

//     return 0;
// }

//-----------------------------------------------------------tree prac in chirag sir class on 4/11/2025------------------------------
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
// #include <climits>
// using namespace std;

// class TreeNode
// {
// public:
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x)
//     {
//         this->val = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int getHeight(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     else
//     {
//         int leftHeight = getHeight(root->left);
//         int rightHeight = getHeight(root->right);
//         return 1 + max(leftHeight, rightHeight);
//     }
// }
// //-----------------------------------------------------------------------------preorder
// void preOrder(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout << root->val << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }
// //-------------------------------------------------------------------------------inorder
// void inOrder(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     inOrder(root->left);
//     cout << root->val << " ";
//     inOrder(root->right);
// }
// //----------------------------------------------------------------------------------postorder
// void postOrder(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout << root->val << " ";
// }
// //---------------------------------------------------------------------------------levelorder
// void levelOrder(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }

//     queue<TreeNode *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         TreeNode *current = q.front();
//         q.pop();

//         cout << current->val << " ";

//         if (current->left != nullptr)
//         {
//             q.push(current->left);
//         }
//         if (current->right != nullptr)
//         {
//             q.push(current->right);
//         }
//     }
// }
// //----------------------------------------------------------------------------------------------countNodes
// int countNodes(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }
// //----------------------------------------------------------------------------------------------findmax
// int findMax(TreeNode *root)
// {
//     if (root == nullptr)
//     {
//         return INT_MIN;
//     }

//     int leftMax = findMax(root->left);
//     int rightMax = findMax(root->right);

//     return max(root->val,max(leftMax, rightMax));
// }
// //----------------------------------------------------------------------------------------------isSameTree
// bool isSameTree(TreeNode *p, TreeNode *q)
// {
//     if (p == nullptr && q == nullptr)
//     {
//         return true;
//     }

//     if (p == nullptr || q == nullptr)
//     {
//         return false;
//     }

//     return (p->val == q->val) &&
//            isSameTree(p->left, q->left) &&
//            isSameTree(p->right, q->right);
// }
//---------------------------------------------------------------------------------------------int main
// int main()
// {
//     TreeNode *root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(7);
//     root->left->right = new TreeNode(5);

//     cout << "1. Height of tree: " << getHeight(root) << endl;

//     cout << "2. Traversals:" << endl;
//     cout << "   Pre-order: ";
//     preOrder(root);
//     cout << std::endl;
//     cout << " In-order:  ";
//     inOrder(root);
//     cout << std::endl;
//     cout << "   Post-order:";
//     postOrder(root);
//     cout << std::endl;
//     cout << "   Level-order (BFS): ";
//     levelOrder(root);
//     cout << std::endl;

//     cout << "3. Total nodes: " << countNodes(root) << endl;

//     cout << "4. Maximum value: " << findMax(root) << endl;

//     TreeNode *root2 = new TreeNode(1);
//     root2->left = new TreeNode(2);
//     root2->right = new TreeNode(3);
//     root2->left->left = new TreeNode(7);
//     root2->left->right = new TreeNode(5);

//     TreeNode *root3 = new TreeNode(1);
//     root3->left = new TreeNode(2);
//     root3->right = new TreeNode(99);

//     cout << "5. Identical checks:" << endl;
//     cout << "   Tree 1 vs Tree 2 (identical): "
//          << (isSameTree(root, root2) ? "True" : "False") << endl;
//     cout << "   Tree 1 vs Tree 3 (different): "
//          << (isSameTree(root, root3) ? "True" : "False") << endl;

//     delete root->left->left;
//     delete root->left->right;
//     delete root->left;
//     delete root->right;
//     delete root;

//     delete root2->left->left;
//     delete root2->left->right;
//     delete root2->left;
//     delete root2->right;
//     delete root2;

//     delete root3->left;
//     delete root3->right;
//     delete root3;

//     return 0;
// }

// -------------------------------prac--------------------------
// #include <iostream>
// #include <queue>
// #include <climits>
// using namespace std;

// class Node
// {
// public:
//     Node *left;
//     Node *right;
//     int value;
//     Node(int value)
//     {
//         this->value = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// int getheight(Node *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     else
//     {
//         int leftheight = getheight(root->left);
//         int rightheight = getheight(root->right);
//         return 1 + max(leftheight, rightheight);
//     }
// }
// void preorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     else
//     {
//         cout << root->value << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void inorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     else
//     {
//         inorder(root->left);
//         cout << root->value << " ";
//         inorder(root->right);
//     }
// }
// void postorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     else
//     {
//         postorder(root->left);
//         postorder(root->right);
//         cout << root->value << " ";
//     }
// }

// void levelorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     else
//     {
//         queue<Node *> q;
//         q.push(root);

//         while (!q.empty())
//         {

//             Node *current = q.front();
//             q.pop();

//             cout << current->value << " ";

//             if (current->left != nullptr)
//             {
//                 q.push(current->left);
//             }
//             if (current->right != nullptr)
//             {
//                 q.push(current->right);
//             }
//         }
//     }
// }
// int countNodes(Node *root)
// {
//     if (root == nullptr)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1 + countNodes(root->left) + countNodes(root->right);
//     }
// }
// int findmax(Node* root){
//     if(root==nullptr){
//         return INT_MIN;
//     }
//     else{
//         int leftmax=findmax(root->left);
//         int rightmax=findmax(root->right);
//         return max(root->value,max(leftmax,rightmax));
//     }
// }

// int main()
// {
//     Node *root = new Node(0);
//     root->left = new Node(1);
//     root->right = new Node(2);
//     root->left->left = new Node(3);
//     root->left->right = new Node(4);
//     root->left->right->left = new Node(5);

//     int size = getheight(root);
//     cout << size << endl;

//     preorder(root);
//     cout << endl;
//     inorder(root);
//     cout << endl;
//     postorder(root);
//     cout << endl;

//     cout << "level order traversal : " << endl;
//     levelorder(root);

//     int number = countNodes(root);
//     cout << "Number of nodes: " << number << endl;

//     int maximum=findmax(root);
//     cout<<maximum<<endl;

//     return 0;
// }


// -------------------------------------------------11 -11 - 2025--------------------------------

#include <iostream>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int value;
    Node(int value){
        this->value=value;
        left=right=NULL;
    }

    void nodesatlevel(Node* root,int distance){
        if(root==NULL) return;
        else{
            if(distance==0){
                cout<<root->value<<" ";
                return;
            }
        }
        nodesatlevel(root->left,distance-1);
        nodesatlevel(root->right,distance-1);
    }

    int findtheheightoftree(Node* root){
        if(root==NULL){
            return -1;
        }
        else{
            return 1+ max(findtheheightoftree(root->left),findtheheightoftree(root->right));
        }
    }
    void printtreesorted(Node* root){  // it is not a binary search tree so inorder will not print a sorted tree 
        if(root==NULL){
            return;
        }
        else{
            printtreesorted(root->left);
            cout<<root->value<<" ";
            printtreesorted(root->right);
        }
    }
    void levelorderusingheight(Node* root){  // time complexity is n^2 as nodesatlevel loop is in the forloop of this function
        int h=findtheheightoftree(root);
        for(int i=0;i<=h;i++){
            nodesatlevel(root,i);
        }
        cout<<endl;
    }
    int totalnodes(Node* root){
        if(root==NULL){
            return 0;
        }
        return 1+ totalnodes(root->left)+totalnodes(root->right);
    }

};

int main(){
    Node* root=new Node(0);
    root->left=new Node(1);
    root->right=new Node(2);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->left->left->left=new Node(5);

    cout<<"nodes at level 1 are:"<<endl;
    root->nodesatlevel(root,1);
    cout<<endl;

    int height=root->findtheheightoftree(root);
    cout<<"height of tree is: "<<height<<endl;

    cout<<"inorder traversal of tree:"<<endl;
    root->printtreesorted(root);
    cout<<endl;

    cout<<"levelordertraversal"<<endl;
    root->levelorderusingheight(root);

    cout<<"total nodes: "<<root->totalnodes(root)<<endl;


    return 0;
    // around 3000 lines that start all sorts of different small functions in github
    
}