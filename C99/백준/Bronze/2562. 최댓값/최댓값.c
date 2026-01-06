#include <stdio.h>
int main(){
    int first,result,count;
    scanf("%d",&first);
    count=1;
    for(int i=2;i<=9;i++){
        scanf("%d",&result);
        if(first<result){
            first=result;
            count=i;
        }
    }
    printf("%d\n%d",first,count);
    return 0;
}