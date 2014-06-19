//
//  Sort.cpp
//  Sorting
//
//  Created by Suresh Shenoy on 6/17/14.
//  Copyright (c) 2014 Suresh Shenoy. All rights reserved.
//

#include "Sort.h"

void Sort::Generate(int *source, int length)
{
    int random_integer;
    
    cout << "Input Array : " << endl;
    
    for(int index = 0; index < length; index++)
    {
        random_integer = (rand()%10)+1;
        source[index] = random_integer;
        cout << source[index] << " ";
    }
    
}

void Sort::SelectionSort(int* source, int length)
{
    int iMin = 0;
    for(int i = 0; i < length-1; i++)
    {
        for(int j=i+1; j<length; j++)
        {
            if(source[i]>source[j])
            {
                int temp   = 0;
                temp       = source[i];
                source[i]  = source[j];
                source[j]  = temp;
                
                iMin = j;
            }
        }
    }
}

void Sort::BubbleSort(int* source, int length)
{
    for(int i = 0; i<length-1; i++)
    {
        for(int j = i+1; j<length; j++)
        {
            if(source[i]>source[j])
            {
                int temp    = source[i];
                source[i]   = source[j];
                source[j]   = temp;
            }
        }
    }
}

void Sort::MergeSort(int *source, int first, int last)
{
    int pivot = 0;
    if(first < last)
    {
        pivot = (first + last)/2 ;
        MergeSort(source, first, pivot);
        MergeSort(source, pivot + 1, last);
        Merge(source, first, last, pivot);
    }
}

void Sort::Merge(int *a, int first, int last, int pivot)
{
    int x = first;
    int y = first;
    int z = pivot + 1;
    
    int b[10];
    
    while(x <= pivot && z <= last)
    {
        if (a[x] < a[z])
        {
            b[y] = a[x];
            y++;
            x++;
        }
        else
        {
            b[y] = a[z];
            y++;
            z++;
        }
    }
    while (x <= pivot)
    {
        b[y] = a[x];
        y++;
        x++;
    }
    while (z <= last)
    {
        b[y] = a[z];
        y++;
        z++;
    }
    for (x = first; x < y; x++)
    {
        a[x] = b[x];
    }
}

void Sort::Print(int *source, int length)
{
    cout << "\nArray after sorting: \n" << endl;
    
    for(int index = 0; index < length ; index++)
    {
        cout << index << ". " << source[index] << "\n" << endl;
    }
}