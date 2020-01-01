//该程序实现冒泡排序算法

//list 输入数组
// n输入的数组的长度

#include "BubbleSort.h"

void BubbleSort(int list[],int n){
    for(int i=0 ; i < n-1 ;i++)  //扫描的次数尾n-1次,每次找到未排序的最大的数值
    {
        for(int j = 0; j < n-i-1;j++){ //每个数需要比较n-i次(i>0)
            if(list[j] < list[j+1])
            {
                std::swap<int>(list[j],list[j+1]);
            }
        }
    }
}