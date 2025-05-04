#ifndef AVL_H
#define AVL_H

class AVLnode{
    public:
        int data;
        AVLnode* left;
        AVLnode* right;
};

class AVLtree{
    public:
        AVLnode *root;

        AVLtree();

        void insert(int data);
};

#endif 