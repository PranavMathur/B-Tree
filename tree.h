#ifndef TREE_H_
#define TREE_H_

using namespace std;

class Node {
private:
    int *keys;
    Node *children;
    int size;
    bool leaf;
public:
    Node(int size);
    ~Node();
    bool has_key(int key);
    void insert_key(int key);
    Node *get_child(int index);
    void *set_child(int index);
    
    bool is_full();
    bool is_leaf();
};

class BTree {
private:
    Node *root;
public:
    BTree();
    ~BTree();
    
    void insert(int key);
};

#endif
