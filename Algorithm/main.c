//
//  main.c
//  Algorithm
//
//  Created by 孙悟空 on 4/8/16.
//  Copyright © 2016 wxh. All rights reserved.
//

#include <stdio.h>
#include "SortAlgorithm.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[] = {88821,745737,2,3,23414,45,6,98,123,123,3453,123,6454,23435,23456,6436346,90983};
    
    
    // 插入排序
//    insertionSort(a,17,Sort_ACS);
//    insertionSort(a,17,Sort_DESC);
    
    // 冒泡排序
    bubbleSort(a,17,Sort_ACS);
//    bubbleSort(a,17,Sort_DESC);
    
    
    for (int i = 0; i < 17; i ++) {
        printf("%d \n",a[i]);
    }
    
    
    return 0;
}


