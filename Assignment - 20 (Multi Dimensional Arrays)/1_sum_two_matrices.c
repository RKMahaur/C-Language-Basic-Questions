//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("Enter the values of matrix A[3][3] : ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&a[i][j]);
            
    printf("Enter the values of matrix B[3][3] : ");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            c[i][j]=a[i][j]+b[i][j];

    printf("Sum of matrix is : \n");
    for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    return 0;
}