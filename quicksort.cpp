#include<iostream>
#include<conio.h>

using namespace std;

void quicksort(int a[],int first,int last){
    int pivot;
    int i;
    int j;
    int temp;
    if(first < last){
        pivot = first;
        i=first;
        j=last;
    }
    while (i <j){
       while(a[i] <= a[pivot]){
           i++;
       }
       while(a[j] > a[pivot]){
           j--;
       }
       if(i<j){
           temp = a[i];
           a[i] =a[j];
           a[j] = temp; 
       }
    }
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] =temp;
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);
}

int main(){
    int n;
    int a[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    getch();
    return 0;    
}