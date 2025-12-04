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

tree* createNode(int data){
    tree* ptr = new tree(data);
    return ptr;
}

void insert(tree* root, int e){
    tree* prev = nullptr;
    while(root != nullptr){
        prev = root;
        if(e == root->data){
            cout<<"\nCannot Insert\n";
            return;
        }
        else if(e < root->data){
            root = root->left;
        }
        else{
            root  = root->right;
        }
    }
    tree* newnode = createNode(e);
    if( e < prev->data){
        prev->left = newnode;
    }
    else{
        prev->right = newnode;
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
    int data;

    cout << "Enter value of root :";
    cin>>data;

    root = createNode(data);
    
    int k = 0;

    while(true){
        cout<<"\nEnter the other values : ";
        cin>>k;
        if(k == 0){
            break;
        }
        insert(root, k);
    }
    
    cout << "\nInOrder Traversal :" << endl;
    inOrder(root);
    cout << endl;

    return 0;
}