#include <stdio.h>
int main(){
    int a,b,count,sum;
    scanf("%d",&count);
    for(int i=1;i<=count;i++){
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("Case #%d: %d + %d = %d\n",i,a,b,sum);
    }
}