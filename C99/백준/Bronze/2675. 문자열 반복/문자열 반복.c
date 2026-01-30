#include <stdio.h>
int main(){
    int c,r;
    char ch[20];
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        scanf("%d %s",&r,ch);
        for(int j=0;ch[j]!='\0';j++){
            for(int k=0;k<r;k++){
                printf("%c",ch[j]);
            }
        }
        printf("\n");
    }
    return 0;
}