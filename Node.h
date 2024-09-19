#ifndef NODE_H
#define NODE_H

class Node {
public:
    virtual ~Node() {}
    virtual void insert(int key) = 0;
    virtual bool search(int key) = 0;
    virtual void remove(int key) = 0;
};  

#endif