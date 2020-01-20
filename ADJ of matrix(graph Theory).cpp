#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct graph{
    int v;
    int e;
    int** adj; //double pointer for the storage 2d mat //
};

struct graph *g;

struct graph *adj_matrix_graph(){
    int i;
    int u,v;
    struct graph *g = (struct graph*)malloc(sizeof(struct graph));
    // creating the matrix of adj //
    printf("Enter the number of vertices and edges\n");
    scanf("%d %d",&g->v,&g->e);
    g->adj =(int**) malloc(sizeof(g->v * g->v)); 
    for(i=0;i<g->v;i++){
        scanf("%d %d",&u,&v);
        g->adj[u][v]=1;
        g->adj[v][u]=1;
    }
    return g;
}



int main(){
 adj_matrix_graph();
    getch();
    return 0;
}