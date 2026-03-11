#include <stdio.h>
int main(){
    int N,num=0;
    char input[101];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int alp[26]={0}, group=1;
        scanf("%s",input);
        for(int j=0;input[j]!='\0';j++){
            if(alp[input[j]-'a']==0){
                alp[input[j]-'a']=1;
            } 
            else if(input[j]!=input[j-1]){
                group=0;
                break;
            }
        }
        if(group){
            num++;
        }
    }
    printf("%d",num);
}