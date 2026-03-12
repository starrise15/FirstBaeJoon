#include <stdio.h>
#include <string.h>
int main(){
    char sub[50],grade[5];
    double score,sum=0,gsum=0;
    for(int i=0;i<20;i++){
        scanf("%s %lf %s",sub,&score,grade);
        if(strcmp(grade,"A+")==0){
            sum+=score*4.5;
            gsum+=score;
        }else if(strcmp(grade,"A0")==0){
            sum+=score*4.0;
            gsum+=score;
        }else if(strcmp(grade,"B+")==0){
            sum+=score*3.5;
            gsum+=score;
        }else if(strcmp(grade,"B0")==0){
            sum+=score*3.0;
            gsum+=score;
        }else if(strcmp(grade,"C+")==0){
            sum+=score*2.5;
            gsum+=score;
        }else if(strcmp(grade,"C0")==0){
            sum+=score*2.0;
            gsum+=score;
        }else if(strcmp(grade,"D+")==0){
            sum+=score*1.5;
            gsum+=score;
        }else if(strcmp(grade,"D0")==0){
            sum+=score*1.0;
            gsum+=score;
        }else if(strcmp(grade,"F")==0){
            sum+=0;
            gsum+=score;
        }
    }
    printf("%lf",sum/gsum);
    return 0;
}