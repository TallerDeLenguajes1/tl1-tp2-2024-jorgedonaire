#include <stdio.h>

#define N 5
#define M 7

int main(){
    int i,j;
    int mt[N][M];

    int *pMatriz;

    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(pMatriz + (i * M + j)) = 1+rand()%100; 
            // mt[i][j]=1+rand()%100;
            // printf("%d  ", mt[i][j]);
            printf("%d  ", *(pMatriz + (i * M + j)));
            *pMatriz++;
        }
    printf("\n");
    }
    return 0;
}
