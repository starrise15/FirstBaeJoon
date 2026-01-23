#include <stdio.h>
#include <string.h>
int main(){
    int num;
    char c[100];
    scanf("%d",&num);
    for (int i=0;i<num;i++){
        scanf("%s",c);
        int len=strlen(c);
        printf("%c%c\n",c[0],c[len-1]);
    }
}