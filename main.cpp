#include <iostream>
#include "BubbleSort.h"
#include "SelectSort.h"

int main() {
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    SelectSort(a,10);
    BubbleSort(a,10);
    for(int i=0;i<10;i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}
