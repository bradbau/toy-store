#include<stdio.h>
#include<malloc.h>
#include<time.h>
/*
19.0000ms for four standard test sample 1.00 3.71 0.04 5.91
*/
double absolu(double len, double tar){
    return len>tar?len-tar:tar-len;
}
int main()
{
    static double del=1e-4;
    int i, j, n=0;//i,j
    double buffer, len, tar, ts, to;
    double * line=NULL;
    line=(double*)malloc(sizeof(double));
    while(scanf("%lf", &buffer)&&(buffer)!=0){
        n++;
        line=(double *)realloc(line, n*sizeof(double));
        line[n-1]=buffer;
    }
    ts=clock();
    for(i=0; i<n; ++i){
        double ab;
        len=0;
        tar=line[i];
        for(j=1; ab=absolu(len, tar),ab>del&&len<tar;  ++j){
            len+=1.0/(j+1);
        }
        --j;
        printf("%d cards\n", j);
    }
    to=clock();
    printf("%lf ms\n", to-ts);
    return 0;
}
