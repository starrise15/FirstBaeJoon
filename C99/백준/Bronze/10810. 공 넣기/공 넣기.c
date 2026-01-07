#include <stdio.h>
int main(){
    int a,b,i,j,k;
    scanf("%d %d",&a,&b);
    i=0;
    j=0;
    k=0;
    int arr[a];
    for (int t = 0; t < a; t++) {
        arr[t] = 0;
    }
    for(int w=0;w<b;w++){
        scanf("%d %d %d",&i,&j,&k);
        for(i;i<=j;i++){
            arr[i-1]=k;
        }
    }
    for(int q=0;q<a;q++){
        printf("%d ",arr[q]);
    }
    return 0;
    
}