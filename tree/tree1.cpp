#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        left = right = nullptr;
    }
};

class Tree
{
public:
    Node *root;
    Tree()
    {
        root = nullptr;
    }
};

bool find(Node *root, int value)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->value == value)
    {
        return true;
    }
    return find(root->left, value) || find(root->right, value);
}

int main()
{

    Tree tree;
    tree.root = new Node(1);
    tree.root->left = new Node(2);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(5);

    cout << "Root: " << tree.root->value << endl;
    cout << "Left Child of Root: " << tree.root->left->value << endl;
    cout << "Right Child of Root: " << tree.root->right->value << endl;

    bool found = find(tree.root, 5);
    if (found == true)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}