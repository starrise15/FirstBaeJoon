#include <stdio.h>
int main(){
    char a[1000001];
    int num=0;
    fgets(a, 1000001, stdin);
    for (int i=0;a[i]!='\0';i++){
        if(a[i]!=' ' && a[i]!='\n' && (a[i+1]==' '||a[i+1]=='\0'||a[i+1]=='\n')){
                num++;
        }
    }
    
    printf("%d",num);
    return 0;
}