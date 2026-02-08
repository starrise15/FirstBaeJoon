#include <stdio.h>
int main(){
    int before[6]={0},after[6]={1,1,2,2,2,8};
    for (int i=0;i<6;i++){
        scanf("%d",&before[i]);
    }
    for (int i=0;i<6;i++){
        printf("%d ",after[i]-before[i]);
    }
    return 0;
}