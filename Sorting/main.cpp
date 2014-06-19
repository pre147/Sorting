//
//  main.cpp
//  Sorting
//
//  Created by Suresh Shenoy on 6/17/14.
//  Copyright (c) 2014 Suresh Shenoy. All rights reserved.
//

#include <iostream>
#include "Sort.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int n = 5;
    int array[n];
    
    srand((unsigned)time(NULL));
    
    Sort s;
    s.Generate(array, n);
    s.BubbleSort(array, n);
    s.Print(array, n);
    
    s.Generate(array, n);
    s.SelectionSort(array, n);
    s.Print(array, n);
    
    s.Generate(array, n);
    s.MergeSort(array, 0, n-1);
    s.Print(array, n);
    
    return 0;
}



