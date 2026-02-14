#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int s=0;s<a-i-1;s++) printf(" ");
        for(int star=0;star<2*i+1;star++) printf("*");
        printf("\n");
    }
    for(int i=a-2;i>=0;i--){
        for(int s=0;s<a-i-1;s++) printf(" ");
        for(int star=0;star<2*i+1;star++) printf("*");
        printf("\n");
    }
    return 0;
}

