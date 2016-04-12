//
//  SortAlgorithm.c
//  Algorithm
//
//  Created by 孙悟空 on 4/8/16.
//  Copyright © 2016 wxh. All rights reserved.
//

#include "SortAlgorithm.h"

void insertionSortACS(int* array,int length);
void insertionSortDESC(int* array,int length);

void bubbleSortACS(int* array,int length);
void bubbleSortDESC(int* array,int length);

void swap(int* x,int* y);


#pragma -mark bubbleSort - 冒泡排序
void bubbleSort(int* array,int length,SortType sortType){
    if (sortType == Sort_DESC) {
        bubbleSortDESC(array, length);
    }else if (sortType == Sort_ACS){
        bubbleSortACS(array, length);
    }
}

void bubbleSortACS(int* array,int length){
    int i,j;
    
    for (i = 0; i < length; i ++) {
        
        for (j = 0; j < length - i; j ++) {
            
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}


void bubbleSortDESC(int* array,int length){
    int i,j;
    
    for (i = 0; i < length; i ++) {
        for (j = 0; j < length - i; j ++) {
            if (array[j] < array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}



#pragma -mark insertionSort - 插入排序

void insertionSort(int* array,int length,SortType sortType){
    if (sortType == Sort_DESC) {
        insertionSortDESC(array, length);
    }else if (sortType == Sort_ACS){
        insertionSortACS(array, length);
    }
}

/**
 *  插入排序(升序)
 *
 *  @param array  需要排序的数组
 *  @param length 数组长度
 */
void insertionSortACS(int* array,int length){
    int i,j,temp;
    for (i = 1; i < length; i++) {
        temp = array[i];
        for (j = i - 1; j >= 0; j--) {
            if (temp < array[j]) {
                array[j + 1] =  array[j];
            }else{
                break;
            }
        }
        array[j + 1] = temp;
    }
}


/**
 *  插入排序(逆序)
 *
 *  @param array  需要排序的数组
 *  @param length 数组长度
 */
void insertionSortDESC(int* array,int length){
    
    int i,j,temp;
    for (i = 1; i < length; i ++) {
        temp = array[i];
        
        for (j = i - 1; j >= 0; j--) {
            if (temp > array[j]) {
                array[j + 1] = array[j];
            }else{
                break;
            }
        }
        array[j + 1] = temp;
    }
}


/**
 *  使用异或运算交换数值
 *
 *  @param x x
 *  @param y y
 */
void swap(int* x,int* y){
    
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    
}

