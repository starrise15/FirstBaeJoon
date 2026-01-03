#include <stdio.h>
int main(){
    int N,v,m;
    scanf("%d",&N);
    int a[N];
    for (int i=0;i<N;i++){
        scanf("%d ",&a[i]);
    }
    scanf("%d",&v);
    m=0;
    for (int j=0;j<N;j++){
        if(a[j]==v){
            m++;
        }
    }
    printf("%d",m);
    return 0;
}