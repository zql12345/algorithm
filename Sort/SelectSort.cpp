//该算法实现了选择排序算法
#include "Sort/SelectSort.h"

void SelectSort(int list[],int n)
{
    int min;    //存储最小值的下标
    for(int i=0; i<n-1; i++)
    {
        min = i;  //默认当前值尾最小
        for(int j=i+1; j<n; j++)
        {
            if(list[j]<list[min])
            {
                min = j;    //如果当前值比最小的值还小,则当前值尾最下值
            }

            std::swap<int>(list[i],list[min]);  //找到最小的值后,和当前的元素进行交换
        }
    }
}