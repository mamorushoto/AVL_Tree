#include "windows.h"
#include <iostream>
#include "AVLTree.h"

int main() {
    AVLTree tree;
    int n, value;

    std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> n;

    std::cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        tree.insert(value);
    }

    tree.display();

    std::cout << "Enter a number to search: ";
    std::cin >> value;
    std::cout << (tree.search(value) ? "Found" : "Not Found") << std::endl;

    std::cout << "Enter a number to remove: ";
    std::cin >> value;
    tree.remove(value);
    tree.display();

    Sleep(10000);

    return 0;
}