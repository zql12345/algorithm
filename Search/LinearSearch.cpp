//该程序尾线性查找算法的实现
#include "Search/LinearSearch.h"

int LinearSearch(const int a[],int n,int m)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==m)
        {
            return i;
        }
    }
    return -1;
}
