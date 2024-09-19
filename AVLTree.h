#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"

class AVLTree {
private:
    AVLNode* root;

public:
    AVLTree();
    void insert(int key);
    bool search(int key);
    void remove(int key);
    void inorderTraversal();
    void display();

private:
    void inorder(AVLNode* node);
};

#endif 