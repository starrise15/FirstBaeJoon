#include <stdio.h>
int main(){
    int count,min,check;
    scanf("%d %d", &count, &min);
    for (int i=0;i<count;i++){
        scanf("%d",&check);
        if(check<min){
            printf("%d ",check);
        }
    }
    return 0;
}