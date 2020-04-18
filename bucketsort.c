#include<stdio.h>
#include<conio.h>

int main(){
    int n;
    
    cin>>n;
    
    
    int a[n];
    int i;

    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }


    int count[n];
    
    for(int i=0;i<n;++i){
        count[i] = 0;
    }

    for(i =0;i<n;++i){
        (count[a[i]])++;
    }

    int j;
    
    for(i=0;j=0;i<n;i++){
        for(;count[i] > 0;(count[i])--){
            a[j++]=i;

        }
    }

    getch();
    return 0;
    
}










