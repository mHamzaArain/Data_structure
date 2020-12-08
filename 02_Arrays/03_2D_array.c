// 2D Array

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Only stack way
    int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};

    // Stack + heap way
    int *B[3];

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

    // Only heap way
    int **C;
    C=(int **)malloc(3*sizeof(int *));

    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));

    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            C[i][j] = i+j;
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}