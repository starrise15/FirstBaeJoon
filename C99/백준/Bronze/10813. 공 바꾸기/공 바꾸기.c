#include <stdio.h>
int main(){
    int n,m,i,j,change;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int k=0;k<n;k++){
        arr[k]=k+1;
    }
    for(int l=0;l<m;l++){
        scanf("%d %d",&i,&j);
        change=arr[i-1];
        arr[i-1]=arr[j-1];
        arr[j-1]=change;
    }
    for(int o=0;o<n;o++){
        printf("%d ",arr[o]);
    }
    return 0;
}