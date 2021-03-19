#include "tree.h"

Node::Node(int size) : size(size) {
    leaf = false;
    keys = new int[size];
}

Node::~Node() {
    //TODO
}

bool Node::has_key(int key) {
    return true;
}

void insert_key(int key) {
    //TODO
}

Node *get_child(int index) {
    return nullptr;
}

void *set_child(int index) {
    //TODO
}

bool Node::is_full() {
    return true;
}

bool Node::is_leaf() {
    return true;
}