#include "tree.h"
#include <iostream>

using namespace std;

int input = 0;

node* createTree( node * root ){
    if (!root){
        root = new node;
        cin >> input;
        if (input == 0){
            delete root;
            return nullptr;
        }
        root->data=input;
        cout << "enter the left node value of " << root->data << " : " ;
        root->left=createTree(root->left);
        cout << "enter the right node value of " << root->data << " : " ;
        root->right=createTree(root->right);
        return root;
    }
    else{
        cout << "node is not an empty node" << endl;
        return nullptr;
    }
}

void inorder(node * root){
    if (root){
        inorder(root->left);
        cout << root -> data << '\t';
        inorder(root->right);
    }
    return ;
}

void preorder(node * root){
    if (root){
        cout << root -> data << '\t';
        preorder(root->left);
        preorder(root->right);
    }
    return ;
}

void postorder(node * root){
    if (root){
        postorder(root->left);
        postorder(root->right);
        cout << root -> data << '\t';
    }
    return ;
}
