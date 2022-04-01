#include "unity.h"
#include<matrix.h>

extern void matrix_add();
extern void matrix_multiply();
extern void  matrix_square();

void setUp(void){

}
void tearDown(void){

}

int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(matrix_add);
    RUN_TEST(matrix_multiply);
    RUN_TEST(matrix_square);
    return (UnityEnd());
}
