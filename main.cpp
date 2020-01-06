#include <iostream>
#include "BinaryTree.h"

int main(){
    Treenote<char> jia,jian,cheng,chu,a,b,c,d,e;
    jia.data = '+';
    jian.data = '-';
    cheng.data = '*';
    chu.data = '/';
    a.data = 'a';
    b.data = 'b';
    c.data = 'c';
    d.data = 'd';
    e.data = 'e';
    BinaryTree<char> tree;
    tree.root = &jia;
    jia.LeftChild = &jian;
    jia.RightChild = &a;
    jian.LeftChild = &cheng;
    jian.RightChild = &b;
    cheng.LeftChild = &chu;
    cheng.RightChild = &c;
    chu.LeftChild = &e;
    chu.RightChild = &d;
    tree.print();
    return 0;
}