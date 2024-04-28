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
 * @file stats.h 
 * @brief Header file for C-programming code
 *
 * This file contains all function prototype and function description
 *
 * @author Yash
 * @date 27 April 2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief print statistics of an array
 *
 *  A function that prints the statistics of an array including minimum,
 *  maximum, mean, and median. 
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 */
void print_statistics(unsigned char* , unsigned int);

/**
 * @brief print array to screen
 *
 * Given an array of data and a length, the function prints the array to the  
 * screen
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 */
void print_array(unsigned char* , unsigned int);

/**
 * @brief find median of an array
 *
 * Given an array of data and a length, returns the median value
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return Median of array
 */
unsigned char find_median(unsigned char* , unsigned int);

/**
 * @brief find mean of an array
 *
 * Given an array of data and a length, returns the mean value
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return Median of array
 */
unsigned char find_mean(unsigned char* , unsigned int);

/**
 * @brief find maximum of an array
 *
 * Given an array of data and a length, returns the maximum value
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return maximum of array
 */
unsigned char find_maximum(unsigned char* , unsigned int);

/**
 * @brief find minimum of an array
 *
 * Given an array of data and a length, returns the minimum value
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 * @return minimum of array
 */
unsigned char find_minimum(unsigned char* , unsigned int);

/**
 * @brief sort the given array
 *
 * Given an array of data and a length, sorts the array from largest to
 * smallest.  (The zeroth Element is the largest value, and the last element
 * (n-1) is the smallest value. )
 *
 * @param data A unsigned char pointer to an n-element data array
 * @param length An unsigned integer as the size of the array
 *
 */
unsigned char sort_array(unsigned char* , unsigned int);

#endif /* __STATS_H__ */
