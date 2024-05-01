//
// Created by przb on 4/30/24.
//

#ifndef BTREE_BTREE_H
#define BTREE_BTREE_H

#include "node.h"

#define BRANCHING_FACTOR 5
#define MAX_KEYS 4
#define MIN_KEYS 2
#define MIN_ROOT_KEYS 1



class btree {
private:
    node *root;

public:
    // when constructing a btree we need to
    // allocate a new root node,
    btree(int root);

    // when destructing a btree we need to ...
    ~btree();

    // when inserting we need to:
    // - start at the root node
    // - if the key is inside the root node, dont do anything.
    // - otherwise if the size is smaller than the max, insert the new item at the appropriate location
    // - otherwise if the size is equal to the max,
    //      - we make a "new" array with all the items in sorted order
    //      - divide the new array in half, with the middle item being separated from the halves
    //      - create a new node for the left and right half, with the keys from above, and the children as appropriate
    //      - create a new node for the separated item, which will become the root node.
    //      - make the children of the root node equal to the new nodes that we created
    void insert(int key);

    // when removing we need to...
    void remove(int key);

    // when searching we need to...
    bool search(int key);
};


#endif //BTREE_BTREE_H
