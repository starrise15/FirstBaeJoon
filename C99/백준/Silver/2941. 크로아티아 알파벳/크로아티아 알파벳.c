#include <stdio.h>
int main(){
    char a[100];
    int sum=0;
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++){
        if(((a[i]=='c') && (a[i+1]=='=' || a[i+1]=='-'))||(a[i]=='d' && a[i+1]=='-')||((a[i]=='l'||a[i]=='n') && a[i+1]=='j')||((a[i]=='s'||a[i]=='z') && (a[i+1]=='='))){
            sum++;
            i++;
        }else if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='='){
            sum++;
            i+=2;
        }else{
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}