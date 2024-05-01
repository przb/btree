//
// Created by przb on 4/30/24.
//

#ifndef BTREE_NODE_H
#define BTREE_NODE_H

// best to not redefine these here, but i dont wanna fight the build system rn
#define BRANCHING_FACTOR 5
#define MAX_KEYS 4
#define MIN_KEYS 2
#define MIN_ROOT_KEYS 1


class node {
private:
    int keys[MAX_KEYS];
    node *children[BRANCHING_FACTOR];
    int size;
    bool is_full;
public:

    // When creating a new node, we put the item in the keys array, and set its children to null.
    node(int val);

    // when destructing a node, we are going to recursively destruct all the children, and remove all thekeys
    ~node();

    // insert only when the node is not full
    bool insert(int val);
};


#endif //BTREE_NODE_H
