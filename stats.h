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
 * @brief head file that declares the functions
 *
 * <Add Extended Description Here>
 *
 * @author Sneha Anand
 * @date 03-10-2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
* @brief the function prints the statistics of the array ( min,max,mean , median)
* @param array - pointer to the array of the data
* @param size - numberof elements in array 
*
*/
void print_statistics ( unsigned char *array , unsigned int size );

/**
* @brief the function prints the array
* @param array - pointer to the array of the data
* @param size - numberof elements in array 
*
*/
void print_array ( unsigned char *array , unsigned int size );

/**
* @brief the function finds the median of the array
* @param array - pointer to the array of the data
* @param size - number of elements in array 
* @return median value as unsigned char
*
*/
unsigned char find_median ( unsigned char *array , unsigned int size );

/**
* @brief the function finds the mean of the array
* @param array - pointer to the array of the data
* @param size - number of elements in array 
* @return mean value as unsigned char
*
*/
unsigned char find_mean ( unsigned char *array , unsigned int size );

/**
* @brief the function finds the maximum value of the array
* @param array - pointer to the array of the data
* @param size - number of elements in array 
* @return maximum value as unsigned char
*
*/
unsigned char find_maximum  ( unsigned char *array , unsigned int size );

/**
* @brief the function finds the minimum value of the array
* @param array - pointer to the array of the data
* @param size - number of elements in array 
* @return minimum value as unsigned char
*
*/
unsigned char find_minimum ( unsigned char *array , unsigned int size );
/**
* @brief the function sorts the array from largest to smallest
* @param array - pointer to the array of the data
* @param size - number of elements in array 
* @return minimum value as unsigned char
*
*/
void sort_array ( unsigned char *array , unsigned int size );

#endif /* __STATS_H__ */
