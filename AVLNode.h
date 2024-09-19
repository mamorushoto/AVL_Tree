#ifndef AVLNODE_H
#define AVLNODE_H

#include "Node.h"

class AVLNode : public Node {
public:
    int key;
    AVLNode* left;
    AVLNode* right;
    int height;

    AVLNode(int key);
    void insert(int key) override;
    bool search(int key) override;
    void remove(int key) override;

    int getHeight(AVLNode* node);
    int getBalance(AVLNode* node);
    AVLNode* rightRotate(AVLNode* y);
    AVLNode* leftRotate(AVLNode* x);
    AVLNode* insertNode(AVLNode* node, int key);
    AVLNode* removeNode(AVLNode* node, int key);
};

#endif