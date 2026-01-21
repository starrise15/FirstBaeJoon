#include <stdio.h>
int main(){
    int num=0;
    char lang[1000]={};
    scanf("%s",lang);
    for(int i=0;i<1000;i++){
        if(lang[i]!=NULL){
            num+=1;
        }else{
            break;
        }
    }
    printf("%d",num);
    return 0;
}