#include <iostream>
#include "BubbleSort.h"
#include "SelectSort.h"
#include "LinearSearch.h"
#include "Recursion.h"

int main() {
    int n = 5;
    int sum;
    sum = Recursion(n) ;
    std::cout << sum << std::endl;
    return 0;
}
