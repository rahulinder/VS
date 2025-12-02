#include <iostream>
#include <utility> 
using namespace std;

class node {
public:
    int data;
    node* right;
    node* left;

    node() {
        data = 0;
        left = nullptr;
        right = nullptr;
    }

    node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void sortArray(int val[], int k) {
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < k - 1; i++) {
            if (val[i] > val[i + 1]) {
                swap(val[i], val[i + 1]);
            }
        }
    }
}

node* createBalancedTree(int val[], int start, int end) {
    
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;

    node* root = new node(val[mid]);

    root->left = createBalancedTree(val, start, mid - 1);

    root->right = createBalancedTree(val, mid + 1, end);

    return root;
}

void displayInOrder(node* root) {
    if (root == nullptr) {
        return;
    }
    displayInOrder(root->left);
    cout << root->data << " ";
    displayInOrder(root->right);
}

int main() {
    int k = 0;
    cout << "How many entries you want to insert : ";
    cin >> k;

    if (k <= 0) {
        cout << "No entries to insert." << endl;
        return 0;
    }

    int* val = new int[k];
    int count = 0;

    for (int i = 0; i < k; i++) {
        cout << "\nEntry " << ++count << " : ";
        cin >> val[i];
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < k; i++) {
        cout << val[i] << " ";
    }
    cout << endl;

    sortArray(val, k);

    cout << "Sorted array:   ";
    for (int i = 0; i < k; i++) {
        cout << val[i] << " ";
    }
    cout << endl;

    node* root = createBalancedTree(val, 0, k - 1);

    cout << "\nIn-order traversal of the new tree: ";
    displayInOrder(root);
    cout << endl;

    if (root != nullptr) {
        cout << "The root of the tree is: " << root->data << endl;
    }

    delete[] val;

    return 0;
}