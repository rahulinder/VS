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
    root = root->left;
    while(root->right != nullptr){
        root = root->right;
    }
    return root;
}


tree* deleteNode(tree* root, int key){
    tree* iPre;
    if(root == nullptr){// If Tree is empty
        return 0;
    }
    if(root->left == nullptr && root->right == nullptr){//If node is a leaf node
        delete(root);
    }

    //Search the node to be deleted
    if(key < root->data){
        deleteNode(root->left, key);
    }
    else if (key > root->data){
        deleteNode(root->right, key);
    }
    //Deletion when node is found
    else{
        iPre = inOrderPred(root);
        root->data = iPre->data;
        deleteNode(root->left, iPre->data);
    }
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