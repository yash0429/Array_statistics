/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief  Implementation file for C-programming code
 *
 * This file contains all the function definition.
 *
 * @author Yash
 * @date 27 April 2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* data , unsigned int length){
   if (data == NULL || length == 0) {
        printf("Invalid input data or length.\n");
        return;
    }

  printf("Actual array-\n");
  print_array(data, length);
  printf("Array after sorting-\n");
  sort_array(data, length);
  print_array(data, length);

  // Calculate statistics
  unsigned char min = find_minimum(data, length);
  unsigned char max = find_maximum(data, length);
  unsigned char mean = find_mean(data, length);
  unsigned char median = find_median(data, length);

  // Print statistics
  printf("Array Statistics:\n");
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
}

void print_array(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
    printf("Invalid input data or length.\n");
    }
  else{
    printf("Array elements:\n");
    for (int i = 0; i < length; ++i) {
      printf("%d\t", data[i]); // Use tab to separate the elements
      if ((i + 1) % 10 == 0) {
        printf("\n"); // New line after every 10 elements
        }
    }
    if (length % 10 != 0) {
      printf("\n"); // Ensure ending with a new line if not a multiple of 10
    }
  }
}

unsigned char find_median(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
    // Handle the case where the array is NULL or the length is zero
    printf("Invalid input data or length.\n");
    return 0;
    }
  else{
    // Sort the array
    sort_array(data, length);

    // Find the median
    if (length % 2 == 0) {
      // If the length is even, the median is the average of the two middle numbers
      return (data[length / 2 - 1] + data[length / 2]) / 2;
    } else {
        // If the length is odd, the median is the middle number
        return data[length / 2];
    }
  }
}

unsigned char find_mean(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
    // Handle the case where the array is NULL or the length is zero
    printf("Invalid input data or length.\n");
    return 0;
    }

    int sum = 0;
    for (int i = 0; i < length; ++i) {
      sum += data[i];
    }
    // Use round function to round the mean to the nearest integer
    return (sum / length);
}

unsigned char find_maximum(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
    // Handle the case where the array is NULL or the length is zero
    printf("Invalid input data or length.\n");
    return 0; // Return an invalid value or handle error as appropriate
  }

    unsigned char max = data[0]; // Assume first element is the max initially
  for (int i = 1; i < length; ++i) {
    if (data[i] > max) {
      max = data[i]; // Found a new maximum
    }
  }
  return max;
}

unsigned char find_minimum(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
        // Handle the case where the array is NULL or the length is zero
        printf("Invalid input data or length.\n");
        return 0; // Return an invalid value or handle error as appropriate
    }

    unsigned char min = data[0]; // Assume first element is the max initially
    for (int i = 1; i < length; ++i) {
        if (data[i] < min) {
            min = data[i]; // Found a new maximum
        }
    }
    return min;
}

unsigned char sort_array(unsigned char* data , unsigned int length){
  if (data == NULL || length == 0) {
        // Handle the case where the array is NULL or the length is zero
        printf("Invalid input data or length.\n");
        return 0;
    }

    // Temporary variable for swapping elements
    unsigned char temp;

    // Sort the array in descending order using bubble sort
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (data[j] < data[j + 1]) {
                // Swap the elements
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }	
}
