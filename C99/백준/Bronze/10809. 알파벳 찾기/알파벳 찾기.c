#include <stdio.h>
int main(){
    char a[101];
    int alp[26];
    for(int i=0;i<26;i++){
        alp[i]=-1;
    }
    scanf("%s",a);
    for(int j=0;a[j]!='\0';j++){
        int id=a[j]-'a';
        if(alp[id]==-1){
            alp[id]=j;
        }
    }
    for(int k=0;k<26;k++){
        printf("%d ",alp[k]);
    }
}