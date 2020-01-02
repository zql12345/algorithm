#include "Recursion.h"

int Recursion(int n){
    if(n==0)
    {
        return 1;
    }
    return n*Recursion(n-1);
}