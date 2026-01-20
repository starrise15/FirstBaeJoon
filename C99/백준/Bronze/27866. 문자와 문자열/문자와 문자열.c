#include <stdio.h>
int main(){
    char lan[1000];
    int pos;
    scanf("%s",lan);
    scanf("%d",&pos);
    printf("%c",lan[pos-1]);
    return 0;
}