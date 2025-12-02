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

void preorder(tree* root){
    if(root != nullptr){
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
    tree* root = new tree(6);           tree* p1 = new tree(7);
    tree* p2 = new tree(5);               tree* p3 = new tree(8);
    tree* p4 = new tree(4);               tree* p5 = new tree(9);
    tree* p6 = new tree(3);               tree* p7 = new tree(10);
    tree* p8 = new tree(2);               tree* p9 = new tree(11);
    tree* p10 = new tree(1);
    
    root->left = p6;                             
    root->right = p5;                          

    p6->left = p8;                    p5->left = p3;
    p6->right = p4;                 p5->right = p7;

    p8->left = p10;                 p4->right = p2;

    p3->left = p1;                    p7->right = p9;

    cout<<"Pre Order :\n";
    preorder(root);

    cout<<"\n\nPost Order :\n";
    postorder(root);

    cout<<"\n\nIn Order\n";
    inorder(root);

    return 0;
}