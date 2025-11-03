#include <iostream>
using namespace std;

// -------------------- NODE STRUCTURE --------------------
class Node {
public:
    int value;
    Node* left;
    Node* right;

    Node(int val) {
        value = val;
        left = right = NULL;
    }
};

// -------------------- HELPER FUNCTIONS --------------------

// Calculate height of a node
int height(Node* node) {
    if (node == NULL) return 0;
    return 1 + max(height(node->left), height(node->right));
}

// Get balance factor of a node
int getBalance(Node* node) {
    if (node == NULL) return 0;
    return height(node->left) - height(node->right);
}

// -------------------- ROTATIONS --------------------

// Right rotation (LL case)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    return x; // new root
}

// Left rotation (RR case)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    return y; // new root
}

// Find node with minimum value in a subtree
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current != NULL && current->left != NULL)
        current = current->left;
    return current;
}

// -------------------- DELETION --------------------
Node* deleteAVL(Node* root, int key) {
    if (root == NULL) return root; // empty tree

    // 1. Perform standard BST deletion
    if (key < root->value) {
        root->left = deleteAVL(root->left, key);
    } 
    else if (key > root->value) {
        root->right = deleteAVL(root->right, key);
    } 
    else {
        // Node to delete found
        if (root->left == NULL || root->right == NULL) {
            // Node has 0 or 1 child
            Node* temp = (root->left != NULL) ? root->left : root->right;

            if (temp == NULL) {
                // No child
                temp = root;
                root = NULL;
            } else {
                // One child, copy its contents
                *root = *temp;
            }
            delete temp;
        } 
        else {
            // Node has 2 children
            Node* temp = minValueNode(root->right); // find inorder successor
            root->value = temp->value;              // copy value
            root->right = deleteAVL(root->right, temp->value); // delete successor
        }
    }

    // If tree became empty
    if (root != NULL) {
        // 2. Update balance factor
        int balance = getBalance(root);

        // -------------------- BALANCE THE TREE --------------------
        // Left heavy
        if (balance > 1) {
            if (getBalance(root->left) >= 0) {
                // LL case
                return rightRotate(root);
            } else {
                // LR case
                root->left = leftRotate(root->left);
                return rightRotate(root);
            }
        }

        // Right heavy
        if (balance < -1) {
            if (getBalance(root->right) <= 0) {
                // RR case
                return leftRotate(root);
            } else {
                // RL case
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
        }
    }

    return root;
}

// -------------------- INORDER TRAVERSAL --------------------
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->value << " ";
        inorder(root->right);
    }
}

// -------------------- MAIN --------------------
int main() {
    Node* root = NULL;

    // Insert nodes manually (for demonstration)
    root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(30);

    cout << "AVL Tree Inorder before deleting the stuff is : ";
    inorder(root);
    cout << endl;
 
    // Delete nodes
    root = deleteAVL(root, 20); // delete node with 2 children
    root = deleteAVL(root, 5);  // delete leaf

    cout << "AVL Tree Inorder after deletions: ";
    inorder(root);
    cout << endl;

    return 0;
}
