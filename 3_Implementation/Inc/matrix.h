/**
 * @file matrix.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _MATRIX_H_
#define _MATRIX_H_

#include"studio.h"

typedef enum function_status_t
{
    success,
}function_status_t
/**
 * @brief function to add matrix number
 * 
 * @param param1 [in] operand 1 to be added
 * @param param2 [in] operand 2 to be added
 * @param result [out] result = param1 + param2
 * @return function_status_t result of function execution
 */

function_status_t  matrix_add(int param1,int param2,int* result);
/**
 * @brief function to multiply matrix nuber
 * 
 * @param param1[in] operand 1 to be  multiply
 * @param param2 [in]operand 2 to be multiply
 * @param param3 [in]operand 3 to be multiply
 * @param param4 [in]operand 4 to be multiply
 * @param sum[out]  sum = (param1*param3)*(param2*param4)
 * @return function_status_t sum of function execution
 */

function_status_t  matrix_multiply(int param1 ,int param2 ,int param3,int param4,int* sum);

#endif
/**
 * @brief function to square matrix number
 * 
 * @param param1 [in] operand 1 to be square 
 * @param sum [out] sum = param1*param1
 * @return function_status_t sum of function execution
 */
function_status_t  matrix_square(int param1,int* sum);
