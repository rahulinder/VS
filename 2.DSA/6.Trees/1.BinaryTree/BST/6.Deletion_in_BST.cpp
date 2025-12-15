#include<iostream>
using namespace std;

class tree{
    public:
    int data;
    tree* left;
    tree* right;
    tree(){}
    tree(int d = 0){
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(tree* root){
    if(root != nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

tree* inOrderPred(tree* root){
    tree* curr = root->left;// 1. Go to the left child once
    while(curr->right != nullptr){// 2. Traverse all the way down the right
        curr = curr->right;
    }
    return curr;// 3. Return the rightmost node
}

tree* deleteNode(tree* root, int key){
    tree* iPre;
    // 1. If Tree is empty, root = NULL
    if(root == nullptr){
        return nullptr;
    }
    // 2. If Element is smaller than Node
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }
    // 3. If Element is greater than Node
    else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }
    else{
        // 4. If Left Node is a Leaf Node  
        if(root->left == nullptr){
            tree* temp = root->right;
            delete root;
            return temp;
        }
        // 5. If Right Node is a Leaf Node  
        else if(root->right == nullptr){
            tree* temp = root->left;
            delete root;
            return temp;
        }
        /* When the deleteNode function has successfully traversed the BST 
        and found the node that matches the key to be deleted (i.e., when key == root->data). 
        This specific block handles the complex case where the node to be deleted (root) 
        has both a left child and a right child.*/
        iPre = inOrderPred(root);// Finds the replacement node
        root->data = iPre->data;// Value Replacement
        root->left = deleteNode(root->left, iPre->data);//Removes the original IPre node
    }
    return root;
}

int main(){
    tree* root = new tree(66);              tree* r7 = new tree(77);
    tree* r5 = new tree(55);                   tree* r8 = new tree(88);
    tree* r4 = new tree(44);                   tree* r9 = new tree(99);
    tree* r3 = new tree(33);                   tree* r10 = new tree(100);
    tree* r2 = new tree(22);                   tree* r11 = new tree(110);
    tree* r1 = new tree(11);

    root->left = r3;
    root->right = r9;

    r3->left = r2;                                        r3->right = r4;
    r2->left = r1;                                         r4->right = r5;

    r9->left = r8;                                        r9->right = r10;
    r8->left = r7;                                        r10->right = r11;

    inorder(root);
    
    int key = 0;
    cout<<"\nKey = ";
    cin>>key;
    cout<<"\nKey to be deleted : "<<key;
    
    deleteNode(root, key);
    cout<<"\nAfter deletion : \n";
    inorder(root);

    return 0;
}