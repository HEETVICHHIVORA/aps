#include <stdio.h>

int min(int a,int b){

    if(a>b){

    return b;

    }

    else return a;

}

void main(){

    int n=4;

    int A[4][4]={

    {0,1,3,5},

    {2,0,99,2},

    {4,3,0,99},

    {99,99,1,0}

    };

    

    for(int k=0;k<n;k++){

    for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

        A[i][j]=min(A[i][j],A[i][k]+A[k][j]);

     

    printf("%d\t",A[i][j]);}

    printf("\n");

    }

    printf("\n");

    }

    printf("All pair shortest paths are:\n");

    for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

        printf("%d\t",A[i][j]);

    }

    printf("\n");

    }

}

