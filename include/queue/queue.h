//
// Created by zql on 20-1-7.
//
//该文件包含了队列数据结构的声明(front指向的为空）
#ifndef ALGORITHM_QUEUE_H
#define ALGORITHM_QUEUE_H

#include <iostream>

class Queue{
public:
    Queue(int queueCapacity=10); //队列默认的容量是10
    bool IsEmpty();  //查看队列是否是空的
    void Push(int n); //从对尾插入数据
    void Pop(); //从队首删除数据
    int Front(); //查看队首的值
    int Rear(); //查看队尾的值
private:
    int *queue;
    int front;  //记录队首的位置
    int rear;   //记录队尾的位置
    int Capacity; //队列的容量
};

Queue::Queue(int queueCapacity):Capacity(queueCapacity) {
   if(Capacity < 1) {
       throw "Queue Capacity must be > 0";
       queue = new int[Capacity];
       front = rear = 0;
   }
}

bool Queue::IsEmpty() {
    if(front==rear){
        return true;
    }
    else{
        return false;
    }
}

void Queue::Push(int n) {
    if((rear+1)%Capacity==front){   //此时队列已满

    }
    rear = (rear+1)%Capacity;   //rear先向后平移一位然后插入数据,如果超过界限从数组头开始
    queue[rear] = n;
}

void Queue::Pop() {
    if(IsEmpty()){
        throw "the Queue is Empty";
    }

    front = (front+1)%Capacity;
}
int Queue::Front() {
    if(IsEmpty()){
        throw "Queue is Empty";
    }
    return queue[(front+1)];
}

int Queue::Rear() {
    if(IsEmpty()){
        throw "Queue is Empty";
    }
    return queue[rear];
}


#endif //ALGORITHM_QUEUE_H
