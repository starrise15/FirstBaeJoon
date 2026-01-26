#include <stdio.h>
int main(){
    int a,sum;
    sum=0;
    scanf("%d",&a);
    int num[a];
    for (int i=0;i<a;i++){
        scanf("%1d",&num[i]);
    }
    for (int j=0;j<a;j++){
        sum+=num[j];
    }
    printf("%d",sum);
    return 0;
}