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
        right =nullptr;
    }
};

void preorder(tree* root){
    if (root != nullptr){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(tree* root){
    if(root != nullptr){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void inorder(tree* root){
    if(root != nullptr){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int main(){
    tree* root = new tree(1);                 tree* r1 = new tree(2);
    tree* r2 = new tree(3);                     tree* r3 = new tree(4);
    tree* r4 = new tree(5);                     tree* r5 = new tree(6);
    tree* r6 = new tree(7);                     tree* r7 = new tree(8);

    root->left = r1;                    root->right = r2;
    r1->left = r3;                         r1->right = r4;
    r2->left = r5;                        r2->right = r6;
    r3->left = r7;                        
 
    cout<<"Pre-Order :\n";
    preorder(root);

    cout<<"\n\nPost-Order :\n";
    postorder(root);

    cout<<"\n\nIn-Order :\n";
    inorder(root);

    return 0;
}