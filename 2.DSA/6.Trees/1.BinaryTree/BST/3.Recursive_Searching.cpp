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

tree* searchBST(tree* root, int key){
    if(root == nullptr){
        return 0;
    }
    if(root->data == key){
        return root;
    }
    else if(root->data > key){
        return searchBST(root->left, key);
    }
    else{
        return searchBST(root->right, key);
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

    int key = 8;
    
    cout<<"\nKey = "<<key;

    tree* k =  searchBST(root,key);

    if(k != nullptr){
        cout<<"\nFound : "<<k->data;
    }
    else{
        cout<<endl<<key<<" not found in Tree";
    }

    return 0;
}