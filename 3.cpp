#include <iostream>

using namespace std;

class BinaryTree {
private:
    // A private struct for the node
    struct Node {
        int data;
        Node* left;
        Node* right;

        // Node constructor
        Node(int val) {
            data = val;
            left = nullptr;
            right = nullptr;
        }
    };

    // The root of the tree
    Node* root;

    Node* insertHelper(Node* node, int data) {
        if (node == nullptr) {
            return new Node(data);
        }

        if (data < node->data) {
            node->left = insertHelper(node->left, data);
        } else {
            node->right = insertHelper(node->right, data);
        }

        return node;
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int data) {
        root = insertHelper(root, data);
    }
};

int main() {
    BinaryTree bst;

    // Insert nodes
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);

    cout << "Binary Search Tree implemented." << endl;
    cout << "Nodes inserted." << endl;

    return 0;
}