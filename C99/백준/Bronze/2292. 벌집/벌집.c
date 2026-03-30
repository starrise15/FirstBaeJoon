#include <stdio.h>
int main(){
    int a,i,ans=1;
    scanf("%d",&a);
    if (a==1){
        printf("1");
    }
    else{
        i=1;
        for (int j=1;i<a;j++){
            i=i+(6*j);
            ans++;
        }
        printf("%d",ans);
    }
    
    return 0;
}