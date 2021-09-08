#ifndef _ALGORITHMS_H
#define _ALGORITHMS_H

/**
 * @brief Get the element at the position if the array was sorted.
 * 
 * @tparam the type of the elements
 * @param array the array of the elements
 * @param low the lowest index of the array
 * @param high the highest index of the array
 * @param position the position on which the element would be in a sorted array
 * @return the element, which would be at the position if the array was sorted
 */
template<typename T>
T select(T array[], int low, int high, int position);

template<typename T>
void quickSort(T array[], int low, int high);

template<typename T>
void swap(T* a, T* b);

/**
 * @brief Move all elements smaller than pivot to the left and all elements greater than pivot to the right of pivot.
 * 
 * @tparam the type of the elements 
 * @param array the array to be partitioned
 * @param low the lowest index of the array
 * @param high the highest index of the array
 * @return the index of the pivot element. The position of pivot is final.
 */
template<typename T>
int partition(T array[], int low, int high);

#endif