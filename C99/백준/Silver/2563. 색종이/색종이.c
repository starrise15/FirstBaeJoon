#include <stdio.h>
int main(){
    int white[100][100]={0},paper,x,y,count=0;
    scanf("%d",&paper);
    for(int i=0;i<paper;i++){
        scanf("%d %d",&x,&y);
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                if(white[x+j][y+k]!=1){
                    white[x+j][y+k]=1;
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}