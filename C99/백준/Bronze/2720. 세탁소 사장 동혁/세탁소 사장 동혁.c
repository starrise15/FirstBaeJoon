#include <stdio.h>
int main(){
    int charge=0,Mcase=0,q=0,d=0,n=0,p=0;
    scanf("%d",&Mcase);
    for(int i=0;i<Mcase;i++){
        scanf("%d",&charge);
        q=charge/25;
        charge%=25;
        d=charge/10;
        charge%=10;
        n=charge/5;
        charge%=5;
        p=charge;
        printf("%d %d %d %d",q,d,n,p);
        printf("\n");
    }
    return 0;
}