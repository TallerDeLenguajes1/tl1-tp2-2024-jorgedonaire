#include <stdio.h>
#define N 20

int main(){
    int i;
    double vt[N];

    double *p;
    p = &vt[0];

    for(i = 0; i<N ; i++)
    {
        *p=1+rand()%100;    
        p++;
        printf("%i\n", *p);
    }

    return 0;
}
