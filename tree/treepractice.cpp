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

//----------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    int getHeight(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        else
        {
            int leftHeight = getHeight(root->left);
            int rightHeight = getHeight(root->right);
            return 1 + std::max(leftHeight, rightHeight);
        }
    }
//-----------------------------------------------------------------------------preorder
    void preOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        std::cout << root->val << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
//-------------------------------------------------------------------------------inorder
    void inOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        inOrder(root->left);
        std::cout << root->val << " ";
        inOrder(root->right);
    }
//----------------------------------------------------------------------------------postorder
    void postOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        std::cout << root->val << " ";
    }
//---------------------------------------------------------------------------------levelorder
    void levelOrder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        std::queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *current = q.front();
            q.pop();

            std::cout << current->val << " ";

            if (current->left != nullptr)
            {
                q.push(current->left);
            }
            if (current->right != nullptr)
            {
                q.push(current->right);
            }
        }
    }
//----------------------------------------------------------------------------------------------countNodes
    int countNodes(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
//----------------------------------------------------------------------------------------------findmax
    int findMax(TreeNode *root)
    {
        if (root == nullptr)
        {
            return INT_MIN;
        }

        int leftMax = findMax(root->left);
        int rightMax = findMax(root->right);

        return std::max(root->val, std::max(leftMax, rightMax));
    }
//----------------------------------------------------------------------------------------------isSameTree
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return true;
        }

        if (p == nullptr || q == nullptr)
        {
            return false;
        }

        return (p->val == q->val) &&
               isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(5);

    std::cout << "1. Height of tree: " << getHeight(root) << std::endl;

    std::cout << "2. Traversals:" << std::endl;
    std::cout << "   Pre-order: ";
    preOrder(root);
    std::cout << std::endl;
    std::cout << "   In-order:  ";
    inOrder(root);
    std::cout << std::endl;
    std::cout << "   Post-order:";
    postOrder(root);
    std::cout << std::endl;
    std::cout << "   Level-order (BFS): ";
    levelOrder(root);
    std::cout << std::endl;

    std::cout << "3. Total nodes: " << countNodes(root) << std::endl;

    std::cout << "4. Maximum value: " << findMax(root) << std::endl;

    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);
    root2->left->left = new TreeNode(7);
    root2->left->right = new TreeNode(5);

    TreeNode *root3 = new TreeNode(1);
    root3->left = new TreeNode(2);
    root3->right = new TreeNode(99);

    std::cout << "5. Identical checks:" << std::endl;
    std::cout << "   Tree 1 vs Tree 2 (identical): "
              << (isSameTree(root, root2) ? "True" : "False") << std::endl;
    std::cout << "   Tree 1 vs Tree 3 (different): "
              << (isSameTree(root, root3) ? "True" : "False") << std::endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    delete root2->left->left;
    delete root2->left->right;
    delete root2->left;
    delete root2->right;
    delete root2;

    delete root3->left;
    delete root3->right;
    delete root3;

    return 0;
}