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
        cout << root->data << " ";
        inorder(root->right); 
    }
}

static tree* prevNode = nullptr; 

int isBST(tree* root){
    if(root == nullptr){
        return 1; 
    }
    if(!isBST(root->left)){
        return 0;
    }
    if(prevNode != nullptr && root->data <= prevNode->data){
        return 0;
    }
    prevNode = root;

    return isBST(root->right);
}

int main(){
    tree* root = new tree(6);           tree* n7 = new tree(7);
    tree* n5 = new tree(5);               tree* n8 = new tree(8);
    tree* n4 = new tree(4);               tree* n9 = new tree(9);
    tree* n3 = new tree(3);                tree* n10 = new tree(10);
    tree* n2 = new tree(2);                tree* n1 = new tree(1); 
    tree* n11 = new tree(11); 
        
    root->left = n3; 
    root->right = n9; 

    n3->left = n2;n9->left = n8;
    n3->right = n4; n9->right = n10;

    n2->left = n11;  n4->right = n5; 

    n8->left = n7;n10->right = n1; 

    cout << "\n\nIn Order Traversal:\n";
    inorder(root);
    cout << "\n\n";

    prevNode = nullptr; 

    if(isBST(root)){
        cout << "Is BST\n";
    }
    else{
        cout << "Not BST\n";
    }

    return 0;
}