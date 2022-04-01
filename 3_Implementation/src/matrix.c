#include<stdio.h>
#include"matrix.h"

void add( )
{
    int a,b,i,j;
    int a1[6][6];
    int a2[6][6];
    int add[6][6];
    printf("Enter a number of rows \n");
    startsca:
    scanf("%d",&a);
    printf("Enter a number of columns \n");
    scanf("%d", &b);
    if (a==1 && b==1)
	{
	printf("\n Matrix cannot be 1 X 1 order ,Please enter no.of row and column again");
	goto startsca;
	}
	else if (a>6 || b>6)
	{
	printf("\n we cannot be perform morethen 6 X 6 matrix, Please enter no.of row and column again");
	goto startsca ;
    }
    // taking input for the 1st matrix
    printf("Enter the matrix 1 value row wise ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d", &a1[i][j]);
        }
    }
    // taking input for the 2nd matrix
    printf("Enter the matrix 2 value row wise ");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d", &a2[i][j]);
        }
    }
    printf("\nGiven matrix 1 value is \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    printf("\nGiven matrix 2 value is \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t", a2[i][j]);
        }
        printf("\n");
    }
    // Addition of two matrices
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
           add[i][j] = a1[i][j]+a2[i][j];
        }
    }
    printf("Addition of given  matrix is \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}
void multiply()
{
    int a;
    int b;

    int c;
    int d;

    int sum;
    int a1[6][6];
    int a2[6][6];
    int mul[6][6];
    printf("Enter number of rows and columns of matrix 1 \n");
    startsca:
    scanf("%d %d", &a, &b);
    printf("Enter number of rows and columns of matrix 2 \n");
    startsca1:
    scanf("%d %d", &c, &d);
    if (a==1 && b==1)
	{
	printf("\n Matrix1 cannot be 1 X 1 Please enter no.of row and column again\n");
	goto startsca;
	}
	else if (a>6 || b>6)
	{
	printf("\n matrix 1 is more then 6 X 6 order, we cannot be perform morethen 6  X 6 matrix, Please enter no.of row and column again\n");
	goto startsca;
	}
	if (c==1 && d==1)
	{
	printf("\n Matrix 2 cannot be 1 X 1 matrix ,Please enter no.of row and column again\n");
	goto startsca1;
	}
	else if (c>6 || d>6)
	{
	printf("\n matrix 2 is more then  6 X 6 order, we cannot be perform morethen 6 X 6 matrix, Please enter no.of row and column again\n");
	goto startsca1;
	}
    if(b==c)
    {
        // taking input for 1st matrix
         printf("Enter the matrix 1 value row wise \n");
         for(int i=0;i<a;i++)
         {
              for(int j=0;j<b;j++)
              {
                   scanf("%d", &a1[i][j]);
            }
        }
         // taking input for 2nd matrix
        printf("Enter the matrix 2 value row wise \n");
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<d;j++)
            {
                scanf("%d", &a2[i][j]);
            }
        }
        printf("Given matrix 1 value is \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++){
                printf("%d\t", a1[i][j]);
            }
            printf("\n");
        }
        printf("Given matrix 2 value is \n");
        for(int i=0;i<c;i++){
            for(int j=0;j<d;j++){
                printf("%d\t", a2[i][j]);
            }
            printf("\n");
        }
        // multiplication of two matrices
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                for(int k=0;k<c;k++)
                {
                    sum+=a1[i][k]*a2[k][j];
                }
                mul[i][j]=sum;
                sum=0;
            }
        }
        printf("multiplication of above matrices \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<d;j++)
            {
                printf("%d\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Number of rows and columns from matrix 1 and number of row and columns from matrix 2 are not equal, so not able to perform matrix multilication with given matrix\n");
    }
}
void square()
{
    int a;
    int sum;
    int i,j,k;
    int a1[6][6];
    int sq[6][6];
    printf("\n Enter the order of matrix");
    startsac:
    scanf("%d", &a);
    if(a==1){
        printf("\n matrix cannot  be  1 X 1 order, please enter matrix order again");
        goto startsac;
    }
    else if(a > 3){
        printf("\n we cannot be perform more than 6 x 6 order, please enter matrix order again ");
        goto startsac;
    }
    printf("\n Enter the value of matrix row wise \n");
    for (i=0;i<a;i++){
        for(j=0;j<a;j++){
            scanf("%d", &a1[i][j]);
        }
    }
    printf("\nGiven matrix value is \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    // square of matrices
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            sum =0;
            for(k=0;k<a;k++){
                sum += a1[i][k]*a1[k][j];
            }
            sq[i][j]=sum;
        }
    }
    printf("\n square of given matrix is \n");
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            printf("%d\t", sq[i][j]);
        }
        printf("\n");
    }
}
