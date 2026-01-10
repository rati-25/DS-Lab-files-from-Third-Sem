#include <iostream>
#include "tree.h"

using namespace std;

int main () {
    struct node * root {nullptr};
    cout << "enter the root value of the tree : ";
    root = createTree(root);
    cout << "----------------------------------------" << endl << endl;
    cout << "inorder traversal of the tree : " << endl;
    inorder(root);
    cout << endl << "----------------------------------------" << endl;
    cout << "preorder traversal of the tree : " << endl;
    preorder(root);
    cout << endl << "----------------------------------------" << endl;
    cout << "postorder traversal of the tree : " << endl;
    postorder(root);
    cout << endl << "----------------------------------------" << endl;
    return 0;
}