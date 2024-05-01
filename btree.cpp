//
// Created by przb on 4/30/24.
//

#include "btree.h"
#include "iostream"


btree::btree(int k) {
    std::cout << "Hello btree" << std::endl;
    root = new node(k);
}

btree::~btree() {
    std::cout << "Goodbye btree" << std::endl;
}

void btree::insert(int key) {
    int i;
    if (root->is_full) {
        // do some more complex stuff
        // get insertion index of new key
        for (i = 0; i < root->size && key < root->keys[i]; i++) {}

        // divide the root appropriately.
        // three cases: the mid would be the middle if the keys had one more item
        int mid = root->size / 2;
        if (i == mid) {
            // split left and right nodes into the left half and right half of root
        } else if (i < mid) {
            // the right node contains the last root->size / 2 items in root
            for (int j = root->size; j > mid; j--) {

            }

            // the left node contains i and the first mid-1 items from the left
        } else {
            // i > mid
            // the left node contains the first root->size / 2 items in root
            for (int j = 0; j < mid; j++) {

            }
            // the right node contains i and the last mid-1 items from the left
        }

    } else {
        root->insert(key);
    }
    node *root = this->root;
}