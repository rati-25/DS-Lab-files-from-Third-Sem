#ifndef TREE_H
#define TREE_H

typedef struct node
{
    int data{};
    struct node * left{nullptr};
    struct node * right{nullptr};     
} node;

extern int input;

node* createTree(node *);
void inorder (node *);
void preorder (node *);
void postorder (node *);

#endif