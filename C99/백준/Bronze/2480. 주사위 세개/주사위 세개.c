#include <stdio.h>
int main(){
    int a,b,c,max1;
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c){
        max1=a;
    }else if(b>=a && b>=c){
        max1=b;
    }else{
        max1=c;
    }
    if(a==b && b==c){
        printf("%d",10000+a*1000);
    }else if(a==b || c==a){
        printf("%d",1000+a*100);
    }else if(b==c){
        printf("%d",1000+b*100);
    }else{
        printf("%d",100*max1);
    }
    return 0;
}