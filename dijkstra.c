#include<stdio.h>

#include<conio.h>


#define V 9


 int grp[V][V]={ { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 


int minDistance(int dist[], int  sptSet[])
{ 
    
    int min = 2147483647, min_index; 
  
    for (int v = 0; v < V; v++){
        
        if (sptSet[v] == 0 && dist[v] <= min){

            min = dist[v], min_index = v; 
        }

    }
    return min_index; 
} 
void dijkstra(grp[V][V],int src){

    //grp[v][v] -> is the input grp from main fx// 
    
    //src -> is the starting vertex of the grp // 


    bool sptset[V];
    int dist[V];

    for(int i = 0;i<V;i++){

        dist[i] = 2147483647,sptset[i] = 0;
    }

    dist[src] = 0;


    int count = 0;
    
    for(count = 0;count<V-1;count++){

        int u = minDistance(dist,sptset);

        sptset[u]=1;

        int v = 0;

        for(v= 0;v<V;v++){

            if(!sptset[v] &&grp[u][v] && dist[u] != 2147483647 && dist[u] + grp[u][v] < dist[v])

            dist[v] = dist[u] + grp[u][v];

        }

    }

    for (int i = 0; i <V; i++)
    {
        printf("%d \n %d",i,dist[i]);
    }

}




int main(){

    dijkstra(grp,0);

    getch();
    return 0;
}