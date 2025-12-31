#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        for(int empty=a-i;empty>0;empty--){
            printf(" ");
        }
        for(int star=i;star>0;star--){
            printf("*");
        }
        printf("\n");
    }
}