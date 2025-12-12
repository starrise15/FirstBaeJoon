#include <stdio.h>
int main(){
    int t,m,c,t1;
    scanf("%d %d",&t,&m);
    scanf("%d",&c);
    if(m+c>=60){
        t1=(t+(m+c)/60)%24;
        m=(m+c)%60;
        printf("%d %d",t1,m);
    }else{
        printf("%d %d",t%24,m+c);
    }

}