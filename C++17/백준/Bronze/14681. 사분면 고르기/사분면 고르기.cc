#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>0 && b>0){
        printf("1\n");
    }else if(a>0 && b<0){
        printf("4\n");
    }else if(a<0 && b<0){
        printf("3\n");
    }else{
        printf("2\n");
    }
}