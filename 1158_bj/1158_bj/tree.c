#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)

typedef struct node{
    struct node * left;
    struct node * right;
    int data;
    int height;
}tree;

tree * 
tinit(int data)
{
    tree * tmp = (tree *)malloc(sizeof(struct node));
    if(tmp == NULL) {
        printf("Heap is full... failed to allocate memory\n");
        exit(1);
    }
    tmp->data = data;
    tmp->height = 0;
    tmp->left = tmp->right = NULL;

    return tmp;
}

int
insertLeft(tree * parent, tree * lchild)
{
}
