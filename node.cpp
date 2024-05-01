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
    std::cout << "sup world!" << std::endl;
}

node::~node() {
    std::cout << "cya world!" << std::endl;
}

bool node::insert(int val) {

    return false;
}