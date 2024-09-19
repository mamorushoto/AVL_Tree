#include "AVLTree.h"
#include <iostream>

AVLTree::AVLTree() {
    root = nullptr;
}

void AVLTree::insert(int key) {
    if (!root) {
        root = new AVLNode(key);
    } else {
        root = root->insertNode(root, key);
    }
}

bool AVLTree::search(int key) {
    return root ? root->search(key) : false;
}

void AVLTree::remove(int key) {
    if (root) {
        root = root->removeNode(root, key);
    }
}

void AVLTree::inorder(AVLNode* node) {
    if (node) {
        inorder(node->left);
        std::cout << node->key << " ";
        inorder(node->right);
    }
}

void AVLTree::inorderTraversal() {
    inorder(root);
}

void AVLTree::display() {
    std::cout << "Inorder traversal of the AVL tree: ";
    inorderTraversal();
    std::cout << std::endl;
}