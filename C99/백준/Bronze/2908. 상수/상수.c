#include <stdio.h>
#include <stdlib.h>
int main(){
    int ca,cb;
    char a[4],b[4],cha,chb;
    scanf("%s %s",a,b);
    cha=a[0];
    a[0]=a[2];
    a[2]=cha;
    chb=b[0];
    b[0]=b[2];
    b[2]=chb;
    ca=atoi(a);
    cb=atoi(b);
    if(ca<cb){
        printf("%d",cb);
    }else{
        printf("%d",ca);
    }
    return 0;
}