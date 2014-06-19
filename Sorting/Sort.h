//
//  Sort.h
//  Sorting
//
//  Created by Suresh Shenoy on 6/17/14.
//  Copyright (c) 2014 Suresh Shenoy. All rights reserved.
//

#ifndef __Sorting__Sort__
#define __Sorting__Sort__

#include <iostream>

using namespace std;

class Sort
{
    
public:
    void static Generate(int *source, int length);
    void static BubbleSort(int *source, int length);
    void static SelectionSort(int *source, int length);
    void static MergeSort(int *source, int first, int last);
    void static Merge(int *a, int first, int last, int pivot);
    void static Print(int *source, int length);
};

#endif /* defined(__Sorting__Sort__) */
