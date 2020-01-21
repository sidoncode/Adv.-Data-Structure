#include<stdio.h>
#include<conio.h>

int main(){
    int e; // number of edge
    int n; // number of vertices
    int u; // from vertex
    int v; // to vertex 
    int i,j;
    int mat[n][n]; // init of the adj matrix //
    printf("Enter the number of edge\n");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("enter the edge no");
        printf("%d",i);
        printf("From\n");
        scanf("%d",&u);
        printf("To\n");
        scanf("%d",&v);
        mat[u][v]= 1;
        mat[v][u] =1;
    }

    for(i=0;i<e;i++){
        for(j=0;j<e;j++){
            printf("%d\t",mat[i][j]);
        }
    }
}