//
// Created by zql on 20-1-6.
//
#include "BinaryTree.h"
#include <iostream>

template <class T>  //中序遍历的递归实现
void BinaryTree<T>::Inorder(Treenote<T> *Node) {
    if(Node){
        Inorder(Node->LeftChild);  //先遍历左子树
        visit(Node);  //输出节点
        Inorder(Node->RightChild);  //遍历右节点
    }
}


template <class T>
void BinaryTree<T>::visit(Treenote<T> *Node) {
    std::cout << Node->data << std::endl;
}
