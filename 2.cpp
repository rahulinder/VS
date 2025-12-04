tree* searchBST(tree* &root, int key){
    while(root != nullptr){
        if(root->data == key){
            return root;
        }
        else if(root->data > key){
            root = root->left;
        }
        else if(root->data < key){
            root = root->right;
        }
    }
    return 0;
}

int preDeletion(tree* root, int key){
    tree* del = nullptr;
    if(root != nullptr){
        if(root->data == key){
            del = root;
            root = root->left;
            root->left = nullptr;
            delete (del);
        }
        if(root->data < key){
            preDeletion(root->right, key);
        }
        else if(root->data > key){
            preDeletion(root->left, key);
        }
    }
    return 0;
}

int postDeletion(tree* &root, int key){
    tree* del = nullptr;
    if(root != nullptr){
        if(root->data == key){
            del = root;
            root = root->right;
            root->right = nullptr;
            delete (del);
        }
        if(root->data < key){
            postDeletion(root->right, key);
        }
        else if(root->data > key){
            postDeletion(root->left, key);
        }
    }
    return 0;
}
