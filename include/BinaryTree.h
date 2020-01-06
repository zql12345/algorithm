//
// Created by zql on 20-1-6.
//用链表实现二叉树
//

#ifndef ALGORITHM_BINARYTREE_H
#define ALGORITHM_BINARYTREE_H

#include <iostream>

template <class T>
class BinaryTree;   //前向声明

template <class T>  //节点
class Treenote{
public:
    Treenote(){
        LeftChild = NULL;
        RightChild = NULL;
    }
    T data;  //节点中存放的数据
    Treenote<T> *LeftChild; //左孩子,左子节点
    Treenote<T> *RightChild; //右孩子,右子节点
};


template <class T>
class BinaryTree{
public:
    BinaryTree(){
        root = NULL;
    }
    void Inorder(Treenote<T> *Node);//中序遍历
    void PreOrder(Treenote<T> *Node); //前序遍历
    void PostOrder(Treenote<T> *Node); //后序遍历
    void LevelOrder(Treenote<T> *Node);//层序遍历
    void visit(Treenote<T> *Node);
    void print();
public:
    Treenote<T> *root; //指向根节点的指针
};


#endif //ALGORITHM_BINARYTREE_H
