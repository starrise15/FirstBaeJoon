#include <stdio.h>
int main(){
    int t,m;
    scanf("%d %d",&t,&m);
    if(m>=45){
        printf("%d %d",t,m-45);
    }else{
        t--;
        if(t<0){
            printf("%d %d",t+24,m+15);
        }else{
            printf("%d %d",t,m+15);
        }
    }
}