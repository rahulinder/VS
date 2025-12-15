#include<iostream>
using namespace std;

class tree{
public:
    int data;
    tree* left;
    tree* right;
    int height;
    
    // Default constructor (not strictly needed since we use the parameterized one)
    tree(){} 
    
    // Parameterized constructor
    tree(int d){
        data = d;
        left = nullptr;
        right = nullptr;
        height = 1; // New nodes start with height 1
    }
};

// Helper function to get height safely (returns 0 for null)
int getHeight(tree* node){
    if(node == nullptr){
        return 0;
    }
    return node->height;
}

// Helper function to create a node
tree* createnode(int data){
    // Height is set to 1 in the constructor now
    tree* node = new tree(data); 
    return node;
}

// Helper function to find maximum
int max(int a, int b){
    return (a > b) ? a : b;
}

// Function to calculate Balance Factor
int getBalanceFactor(tree* node){
    if(node == nullptr){
        return 0;
    }
    return getHeight(node->left) - getHeight(node->right); 
}

// Right Rotation (for LL and LR cases) 
tree* rightRotate(tree* x){
    tree* y = x->left;
    tree* t2 = y->right;

    // Perform rotation
    y->right = x;
    x->left = t2;

    // Update heights (must be done bottom-up)
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // New root
}

// Left Rotation (for RR and RL cases) 
tree* leftRotate(tree* x){
    tree* y = x->right;
    tree* t2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = t2;

    // Update heights (must be done bottom-up)
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;

    return y; // New root
}

// Recursive Insertion and Balance Function
tree* insert(tree* node, int key){
    // 1. Standard BST Insertion
    if(node == nullptr){
        return createnode(key);
    }
    if(key < node->data){
        node->left = insert(node->left, key);
    }
    else if(key > node->data){
        node->right = insert(node->right, key);
    }
    else { // Handles duplicate keys
        return node;
    }

    // 2. Update height of current node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int balance_f = getBalanceFactor(node);

    // 3. Perform Rotations if needed

    // Left Left Case (Balance > 1 and key in left-left subtree)
    if(balance_f > 1 && key < node->left->data){
        return rightRotate(node);
    }
    // Right Right Case (Balance < -1 and key in right-right subtree)
    if(balance_f < -1 && key > node->right->data){
        return leftRotate(node);
    }
    // Left Right Case (Balance > 1 and key in left-right subtree)
    if(balance_f > 1 && key > node->left->data){
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case (Balance < -1 and key in right-left subtree)
    if(balance_f < -1 && key < node->right->data){
        node->right = rightRotate(node->right); 
        return leftRotate(node);
    }
    
    return node;
}

// PreOrder Traversal
void preOrder(tree* root){
    if(root != nullptr){
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(tree* root){
    if(root != nullptr){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}

int main(){
    tree* root = nullptr;

    int key;
    int i = 0;

    cout << "Enter -1 to stop entering data.\n";

    while(true){
        cout << "\nEnter Data " << ++i << " : ";
        cin >> key;
        
        if (key == -1){
            break;
        }

        // --- FIX APPLIED HERE ---
        // Always assign the result of insert() back to root, 
        // as the root can change after a rotation.
        root = insert(root, key);

        // Removed the complex, confusing, and faulty logic around key < 0
        // and the specific i == 1 check. The simple fix above handles 
        // the first insertion and subsequent root changes correctly.
    }
    
    cout << "\nPreOrder Traversal of AVL Tree:\n";
    preOrder(root);
    cout << endl;

    cout << "\nInOrder Traversal of AVL Tree:\n";
    inOrder(root);
    cout << endl;

    return 0;
}