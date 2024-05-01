//
// Created by przb on 4/30/24.
//

#include "node.h"
#include <iostream>


node::node(int k) {
    this->keys[0] = k;
//    this->children is already there
    this->size = 1;
    this->is_full = false;
    std::cout << "sup node!" << std::endl;
}

node::~node() {
    std::cout << "cya node!" << std::endl;
}

bool node::insert(int val) {
    int i, j;

    // since this is only called if the node is not full, we'll return false if full
    if (this->is_full) {
        return false;
    }

    // find the correct index to insert to
    for (i = 0; this->keys[i] < val && i < this->size; i++) {}

    // shift all the elements as needed
    //    for ...
    for (j = this->size - 1; j > i; j--) {
        this->keys[j] = this->keys[j - 1];
        this->children[j] = this->children[j - 1];
    }
    this->keys[i] = val;
    this->children[i] = nullptr;

    // set the new position for child, and increment size. if size is max, the set full


    return true;
}