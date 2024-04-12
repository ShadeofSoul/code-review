#include <stdio.h>
#include <stdlib.h>

int set_matrix(int num, int *arr[]){
      int i, j;
    for (i = 0; i < num; i++)
    for (j = 0; j < num; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    return 0;
}

int get_matrix(int num, int *arr[]){
      int i, j;
     for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        printf("%d ", arr[i][j]);
 
        if(i !=num-1){

        printf("\n");
        }
    }
    return 0;
}

int mult_matrix(int N, int *arr1[], int *arr2[], int *arr3[]){
    int i, j, k;
    for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)
    {
        arr3[i][j] = 0;
        for(k = 0; k < N; k++)
        arr3[i][j] += arr1[i][k] * arr2[k][j];
    }
    return 0;
}


int main(){
    int num, i, j;
    int **A = (int**)malloc(num * sizeof(int*));
    int **B = (int**)malloc(num * sizeof(int*));
    int **C = (int**)malloc(num * sizeof(int*));
    if(scanf("%d", &num)){

    for (i = 0; i < num; i++)
    {
        A[i] = (int*)malloc(num * sizeof(int));
        B[i] = (int*)malloc(num * sizeof(int));
        C[i] = (int*)malloc(num * sizeof(int));
    }

    set_matrix(num, A);
    set_matrix(num, B);
    mult_matrix(num, A, B, C);
    printf("result \n");
    get_matrix(num, C);

    };
   
    return 0;
}