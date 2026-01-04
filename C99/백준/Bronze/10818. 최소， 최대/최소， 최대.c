#include <stdio.h>
int main(){
    int amount,max,min;
    scanf("%d",&amount);
    int arr[amount];
    scanf("%d",&arr[0]);
    max=arr[0];
    min=arr[0];
    for (int i=1;i<amount;i++){
        scanf("%d",&arr[i]);
        if(max<=arr[i]){
            max=arr[i];
        }else if(min>=arr[i]){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}