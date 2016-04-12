//
//  SortAlgorithm.h
//  Algorithm
//
//  Created by 孙悟空 on 4/8/16.
//  Copyright © 2016 wxh. All rights reserved.
//

#ifndef SortAlgorithm_h
#define SortAlgorithm_h

#include <stdio.h>
typedef enum{
    Sort_DESC,
    Sort_ACS
    
} SortType;


#endif /* SortAlgorithm_h */

/**
 *  插入排序
 *
 *  @param array    排序数组
 *  @param length   排序数组的长度
 *  @param sortType 排序方式(升降序)
 */
void insertionSort(int* array,int length,SortType sortType);

/**
 *  冒泡排序
 *
 *  @param array    排序数组
 *  @param length   排序数组的长度
 *  @param sortType 排序方式(升降序)
 */
void bubbleSort(int* array,int length,SortType sortType);
