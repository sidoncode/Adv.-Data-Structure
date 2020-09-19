#include<bits/stdc++.h>
using namespace std;


int main(){
    int i;
    int j;
    int a[10][10];

    for(int i=0;i<n;i++){
        visited[i] = 0;
        for(int j=0;j<b;j++){
            a[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
        dfs(1);
    for(int i=0;i<n;i++){
        if(visited[i]){
            count++;
        }
    }
    if(count==n){
        printf("visited connected\n");
    }
    else
    {
        printf("not connected\n");
    }

    getch();
    
        return 0;
}
