#include <stdio.h>
int main(){
    int arr[43]={0};
    int a,left,sum;
    sum=0;
    for (int i=0;i<10;i++){
        scanf("%d",&a);
        left=a%42;
        arr[left]=1;
    }
    for(int j=0;j<43;j++){
        if(arr[j]==1){
            sum++;
        }
    }
    printf("%d",sum);
}