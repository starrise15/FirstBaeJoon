#include <stdio.h>
int main(){
    char alp[16];
    int sum=0;
    scanf("%s",alp);
    for(int i=0;alp[i]!='\0';i++){
        int n=alp[i]-'A';
        if(n<=2){
            sum+=3;
        }else if(n<=5){
            sum+=4;
        }else if(n<=8){
            sum+=5;
        }else if(n<=11){
            sum+=6;
        }else if(n<=14){
            sum+=7;
        }else if(n<=18){
            sum+=8;
        }else if(n<=21){
            sum+=9;
        }else{
            sum+=10;
        }
    }
    printf("%d",sum);
    return 0;
}