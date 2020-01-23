#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstring>


using namespace std;


int main(){
    int v = 5;
   int G[v][v] = {
  {0, 9, 75, 0, 0},
  {9, 0, 95, 19, 42},
  {75, 95, 0, 51, 66},
  {0, 19, 51, 0, 31},
  {0, 42, 66, 31, 0}
};
    int selected[v]; 
    memset(selected,false,sizeof(selected));
    int no_of_edge = 0;
    selected[0]  = true;


    while (no_of_edge < v-1){
        int x =0;
        int y=0;
        int MIN =999999;
        for(int i=0;i<v;++i){
            if(selected[i]){
                for(int j=0;j<v;j++){
                    if(!selected[j] && G[i][j]){
                        if(MIN > G[i][j]){
                            MIN = G[i][j];
                            x = i;
                            y = j;
                        }

                    }
                }
            }
        }
        cout<<x<<"-"<<y<<":"<<G[x][y]<<endl;
        selected[y] = true;
        no_of_edge ++;
    }
    getch();
    return 0;
}