#include <stdio.h>
int main(){
    int num;
    double max,sum=0;
    scanf("%d",&num);
    double arr[num];
    for(int i=0;i<num;i++){
        scanf("%lf",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<num;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<num;i++){
        arr[i]=arr[i]/max*100.0;
        sum+=arr[i];
    }
    printf("%lf",sum/num);
    return 0;
}
