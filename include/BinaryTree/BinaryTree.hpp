//
// Created by zql on 20-1-6.
//用链表实现二叉树
//

#ifndef ALGORITHM_BINARYTREE_HPP
#define ALGORITHM_BINARYTREE_HPP

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
public:
    Treenote<T> *root; //指向根节点的指针
};


template <class T>  //中序遍历的递归实现
void BinaryTree<T>::Inorder(Treenote<T> *Node){
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


#endif //ALGORITHM_BINARYTREE_HPP
