#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        int count;
        count=i;
        while(count>0){
            printf("*");
            count--;
        }
        printf("\n");
    }
    return 0;
}