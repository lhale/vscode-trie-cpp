// C++ program to demonstrate segmentation
// Ref: https://www.geeksforgeeks.org/core-dump-segmentation-fault-c-cpp/
// Results: Apparently, the compiler optimizes the seg vio out, so use trie.cpp instead
// DO NOT USE

#include <stdio.h>
#include <malloc.h>
#include <iostream>
using namespace std;

// Core Dump/Segmentation fault
int core_dump() {
    
    // allocating memory to p
    int * p = (int *) malloc(8);
    *p = 100;
     
    // deallocated the space allocated to p
    free(p);
     
    // core dump/segmentation fault
    //  as now this statement is illegal
    *p = 110;
     
    return 0;
}

int main() 
{
   int arr[2];
   arr[3] = 10;  // should generate heap fault when Accessing out of bound 
    core_dump();
   return 0;
}
