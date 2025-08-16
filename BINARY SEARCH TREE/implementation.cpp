#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to insert a value into the Binary Search Tree
Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else if (val > root->val) {
        root->right = insert(root->right, val);
    }

    return root;
}

// PreOrder Traversal (Root, Left, Right)
void PreOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

// InOrder Traversal (Left, Root, Right)
void InOrder(Node* root) {
    if (root == nullptr) return;
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
}

// PostOrder Traversal (Left, Right, Root)
void PostOrder(Node* root) {
    if (root == nullptr) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->val << " ";
}

int main() {
    Node* root = NULL;

    // Inserting values to form a Binary Search Tree
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 7);

    cout << "Binary Search Tree in PreOrder: ";
    PreOrder(root);
    cout << endl;

    cout << "Binary Search Tree in InOrder: ";
    InOrder(root);
    cout << endl;

    cout << "Binary Search Tree in PostOrder: ";
    PostOrder(root);
    cout << endl;

    return 0;
}
