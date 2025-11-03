#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class tree
{
public:
    node *root;
    tree()
    {
        root = NULL;
    }

    bool find(node *root, int value)
    {
        if (root == NULL)
            return false;
        if (root->data == value)
            return true;
        return find(root->left, value) || find(root->right, value);
    }
    bool findd(int value)
    {
        return find(root, value);
    }

    void depth_preoder(node *root)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        depth_preoder(root->left);
        depth_preoder(root->right);
    }
    void depth_postoder(node *root)
    {
        if (root == NULL)
            return;
        depth_postoder(root->left);
        depth_postoder(root->right);
        cout << root->data << " ";
    }
    void depth_inoder(node *root)
    {
        if (root == NULL)
            return;
        depth_inoder(root->left);
        cout << root->data << " ";
        depth_inoder(root->right);
    }

    int height(node *root)
    {
        if (root == NULL)
        {
            return -1;
        }
        return 1 + max(height(root->left), height(root->right));
    }

    vector<int> levelorder(node *root)
    {
        vector<int> result;
        if (root == NULL)
            return result;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *current = q.front();
            q.pop();
            result.push_back(current->data);
            if (current->left != NULL)
                q.push(current->left);
            if (current->right != NULL)
                q.push(current->right);
        }
        return result;
    }

    node *buildTreeFromArray(vector<int> &arr, int i)
    {
        if (i >= arr.size())
            return NULL;

        node *root = new node(arr[i]);

        root->left = buildTreeFromArray(arr, 2 * i + 1);
        root->right = buildTreeFromArray(arr, 2 * i + 2);

        return root;
    }
};
int main()
{
    tree t1;
    t1.root = new node(1);
    t1.root->left = new node(2);
    t1.root->right = new node(3);
    t1.root->left->left = new node(4);
    t1.root->left->right = new node(5);

    cout << "DFS (Preorder): ";
    t1.depth_preoder(t1.root);
    cout << endl;
    t1.depth_postoder(t1.root);
    cout << endl;
    t1.depth_inoder(t1.root);

    return 0;
}