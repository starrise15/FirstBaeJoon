#include <stdio.h>
int main(){
    int a, b, count;
    scanf("%d",&count);
    for(count;count>0;count--){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
}