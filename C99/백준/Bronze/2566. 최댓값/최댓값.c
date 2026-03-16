#include <stdio.h>
int main(){
    int num[9][9];
    int max=0, mx=0,my=0;
    for (int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&num[i][j]);
        }
    }        
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(max<num[i][j]){
                max=num[i][j];
                mx=i;
                my=j;
            }
        }
    }
    printf("%d\n",max);
    printf("%d %d",mx+1,my+1);
    
    return 0;
}